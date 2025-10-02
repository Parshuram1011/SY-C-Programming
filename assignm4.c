#include <stdio.h>
int main() {
    int duty_cycle = 5;
    int period = 10;
    printf("Example:\n");
    printf("If duty cycle = %d and period = %d, the PWM signal will be:\n\n", duty_cycle, period);
    printf("\t");
    for (int i = 0; i < period; i++) {
        if (i < duty_cycle) {
            printf("1 "); 
        } else {
            printf("0 "); 
        }
    }
    printf("\n\n"); 
    return 0;
}