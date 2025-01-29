typedef struct {
    int year;
    int month;
    int day;
    int hours;
    int minutes;
    int seconds;
} time;

char* later_time(const Time* t1, const Time* t2);
