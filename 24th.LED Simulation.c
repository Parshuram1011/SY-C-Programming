#include <stdio.h>

int main() {
    int duty = 3;
    int period = 7;
    int i;

    printf("LED Simulation:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("LED ON\n");
        else
            printf("LED OFF\n");
    }

    return 0;
}
