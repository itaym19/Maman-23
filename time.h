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
long long time_to_seconds(const Time* t);
long long time_to_seconds_negative_years(const Time* t);
