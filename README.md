# Maman-23

i have a c program that define a Time structure like so:
typedef struct {
    int year;
    int month;
    int day;
    int hours;
    int minutes;
    int seconds;
} time;

the program needs to receive a text file as an argument of the command line. the text file will contain a number of lines and in each line there will be 12 numbers, the first 6 numbers will be the values of the first Time object and the other 6 numbers will be the values of the second Time object.
help me write this program the most efficient way



#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int year;
    int month;
    int day;
    int hours;
    int minutes;
    int seconds;
} Time;

void print_time(Time *t) {
    printf("Year: %d, Month: %d, Day: %d, Hours: %d, Minutes: %d, Seconds: %d\n",
           t->year, t->month, t->day, t->hours, t->minutes, t->seconds);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

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
        printf("Time 2:\n");
        print_time(&time2);
    }

    fclose(file);
    return 0;
}
