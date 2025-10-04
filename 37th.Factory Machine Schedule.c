#include <stdio.h>

int main() {
    int duty = 7;
    int period = 10;
    int i;

    printf("Factory Machine Schedule:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Machine RUNNING (Minute %d)\n", i);
        else
            printf("Machine PAUSED  (Minute %d)\n", i);
    }

    return 0;
}
