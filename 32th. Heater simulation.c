#include <stdio.h>

int main() {
    int duty = 6;
    int period = 12;
    int i;

    printf("Heater Control Simulation:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Heater ON (Minute %d)\n", i);
        else
            printf("Heater OFF (Minute %d)\n", i);
    }

    return 0;
}
