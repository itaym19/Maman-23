#include <stdio.h>


int main() {
    time t1 = {2025, 1, 28, 14, 30, 45};
    time t2 = {2025, 1, 28, 15, 20, 10};
    
    time later = later_time(&t1, &t2);
    
    printf("The later time is:\n");
    print_time(&later);
    
    return 0;
}
