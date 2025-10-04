#include <stdio.h>

int main() {
    int duty = 2;      
    int period = 8;   
    int i;

    printf("Wi-Fi Module Cycle:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Wi-Fi ACTIVE (T%d)\n", i);
        else
            printf("Wi-Fi SLEEP  (T%d)\n", i);
    }

    return 0;
}
