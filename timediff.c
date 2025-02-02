#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    /* making sure there is exactly 1 file as an argument */
    if (argc != 2) {
        fprintf(stderr, "error getting text file: t.timediff ", argv[0]);
        return 1;
    }

    /* opening file */
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    Time time1, time2;
    while (fscanf(file, "%d %d %d %d %d %d %d %d %d %d %d %d", 
                  &time1.year, &time1.month, &time1.day,
                  &time1.hours, &time1.minutes, &time1.seconds,
                  &time2.year, &time2.month, &time2.day,
                  &time2.hours, &time2.minutes, &time2.seconds) == 12) {
        printf("Time 1:\n");
        print_time(&time1);
        printf("\nTime 2:\n");
        print_time(&time2);
        time_difference_in_seconds(&time1, &time2);
    }

    fclose(file);
    return 0;
}
