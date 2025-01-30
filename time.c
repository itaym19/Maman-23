#incllude <stdio.h>
#include <math.h>

char* later_time(const Time* t1, const Time* t2) {
    /* Compare year */
    if (t1->year > t2->year) {
        return "t1";
    } else if (t1->year < t2->year) {
        return "t2";
    }
    
    /* If years are equal, compare month */
    if (t1->month > t2->month) {
        return "t1";
    } else if (t1->month < t2->month) {
        return "t2";
    }
    
    /* If months are equal, compare day */
    if (t1->day > t2->day) {
        return "t1";
    } else if (t1->day < t2->day) {
        return "t2";
    }
    
    /* If days are equal, compare hours */
    if (t1->hours > t2->hours) {
        return "t1";
    } else if (t1->hours < t2->hours) {
        return "t2";
    }
    
    /* If hours are equal, compare minutes */
    if (t1->minutes > t2->minutes) {
        return "t1";
    } else if (t1->minutes < t2->minutes) {
        return "t2";
    }
    
    /* If minutes are equal, compare seconds */
    if (t1->seconds > t2->seconds) {
        return "t1";
    } else {
        return "t2";
    }
}

/* Helper function to get the number of days in a specific month */
int get_days_in_month(int month) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else if (month == 2) {
        return 28;
    }
    return 0;  /* Invalid month */
}

/* Convert the given time to the total number of seconds since 1/1/0 */
long time_to_seconds(const Time* t) {
    long total_seconds = 0;

    /* Add the seconds for the years */
    total_seconds += (t->year) * 365 * 24 * 60 * 60;  
    
    /* Add seconds for the months of the current year */
    for (int month = 1; month < t->month; month++) {
        total_seconds += get_days_in_month(month) * 24 * 60 * 60;
    }

    /* Add seconds for the days of the current month */
    total_seconds += (t->day - 1) * 24 * 60 * 60;

    /* Add seconds for the hours, minutes, and seconds */
    total_seconds += t->hours * 60 * 60;
    total_seconds += t->minutes * 60;
    total_seconds += t->seconds;

    return total_seconds;
}

/* Convert the given time to the total number of seconds in negative years until 1/1/0 */
long time_to_seconds_negative_years(const Time* t) {
    long total_seconds = 0;
    int month;

    /* Add the seconds for the years */
    total_seconds += (abs(t->year) - 1) * 365 * 24 * 60 * 60;  
    
    /* Add seconds for the months of the current year */
    for (month = (t -> month) + 1; month < 13; month++) {
        total_seconds += get_days_in_month(month) * 24 * 60 * 60;
    }

    /* Add seconds for the days of the current month */
    total_seconds += (get_days_in_month(t -> month) - t -> day - 1) * 24 * 60 * 60;

    /* Add seconds for the hours, minutes, and seconds */
    total_seconds += (24 - t->hours - 1) * 60 * 60;
    total_seconds += ( 60 - t->minutes - 1) * 60;
    total_seconds += 60 - t->seconds;

    return total_seconds;
}

// Function to get the difference between two times in seconds
long time_difference_in_seconds(const Time* t1, const Time* t2) {
    long t1_seconds = time_to_seconds(t1);
    long t2_seconds = time_to_seconds(t2);
    return t2_seconds - t1_seconds;
}
