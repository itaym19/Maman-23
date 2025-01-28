#incllude <stdio.h>

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
    
    // If months are equal, compare day
    if (t1->day > t2->day) {
        return "t1";
    } else if (t1->day < t2->day) {
        return "t2";
    }
    
    // If days are equal, compare hours
    if (t1->hours > t2->hours) {
        return "t1";
    } else if (t1->hours < t2->hours) {
        return "t2";
    }
    
    // If hours are equal, compare minutes
    if (t1->minutes > t2->minutes) {
        return "t1";
    } else if (t1->minutes < t2->minutes) {
        return "t2";
    }
    
    // If minutes are equal, compare seconds
    if (t1->seconds > t2->seconds) {
        return "t1";
    } else {
        return "t2";
    }
}
