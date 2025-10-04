#include <stdio.h>

int main() {
    int duty = 2;
    int period = 5;
    int i;

    printf("Fan Timer Simulation:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Fan ON (Second %d)\n", i);
        else
            printf("Fan OFF (Second %d)\n", i);
    }

    return 0;
}
