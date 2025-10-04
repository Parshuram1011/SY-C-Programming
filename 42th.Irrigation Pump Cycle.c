#include <stdio.h>

int main() {
    int duty = 4;
    int period = 9;
    int i;

    printf("Irrigation Pump Cycle:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Pump ON  (Minute %d)\n", i);
        else
            printf("Pump OFF (Minute %d)\n", i);
    }

    return 0;
}
