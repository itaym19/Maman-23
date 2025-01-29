#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int date1_seconds;
    long long int date2_seconds;
    char *later = malloc(3 * sizeof(char));
    Time time1 = {1, 11, 28, 14, 30, 45};
    Time time2 = {2025, 1, 28, 15, 20, 10};
    
    later = later_time(&time1, &time2);
    date1_seconds = time_to_seconds(&time1);
    date2_seconds = time_to_seconds(&time2);
    
    printf("\nThe later time is:\n%s", later);
    printf("\ntime1 in seconds:\n%lld", date1_seconds);
    printf("\ntime2 in seconds:\n%lld", date2_seconds);

    return 0;
}
