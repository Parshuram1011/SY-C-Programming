#include <stdio.h>

int main() {
    int period = 10;   
    int duty = 7;      
    printf("PWM Simulation (%d,%d)\n");
    for (int i = 0; i < period; i++) {
        if (i < duty) {
            printf("1"); 
        } else {
            printf("0"); 
        }
    }
    printf("\n");
    return 0;
}
