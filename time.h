typedef struct {
    int year;
    int month;
    int day;
} date;

typedef struct {
    int hours;
    int minutes;
    int seconds;
} today_time;

typedef struct {
    date date_instance;
    today_time today_time_instance;
} time;
