#include <stdio.h>

int main() {
    int duty = 4;
    int period = 10;
    int i;

    printf("CPU Task Scheduler Simulation:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("CPU: Active (Time %d)\n", i);
        else
            printf("CPU: Idle   (Time %d)\n", i);
    }

    return 0;
}
