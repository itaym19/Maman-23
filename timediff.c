#include <stdio.h>
#include <stdlib.h>

int main() {
    char *later = malloc(3 * sizeof(char));
    Time t1 = {2025, 2, 28, 14, 30, 45};
    Time t2 = {2025, 1, 28, 15, 20, 10};
    
    later = later_time(&t1, &t2);
    
    printf("\nThe later time is:\n%s", later);
    
    
    return 0;
}
