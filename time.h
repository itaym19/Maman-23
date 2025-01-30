typedef struct {
    int year;
    int month;
    int day;
    int hours;
    int minutes;
    int seconds;
} time;

char* later_time(const Time* t1, const Time* t2);
int get_days_in_month(int month);
long time_to_seconds(const Time* t);
long time_to_seconds_negative_years(const Time* t);
void time_difference_in_seconds(const Time* time1, const Time* time2);
