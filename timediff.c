#include <stdio.h>


int main()
{
    time date1;
    date1.date_instance.year = 1996;
    date1.today_time_instance.hours = 12;
    printf("Date: %d-%d-%d\n", date1.date_instance.year, date1.date_instance.month, date1.date_instance.day);
    printf("Time: %d:%d:%d\n", date1.today_time_instance.hours, date1.today_time_instance.minutes, date1.today_time_instance.seconds);

    return 0;
}
