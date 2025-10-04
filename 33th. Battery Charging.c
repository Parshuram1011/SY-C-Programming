#include <stdio.h>

int main() {
    int duty = 8;
    int period = 10;
    int i;

    printf("Battery Charging:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Charging... (T%d)\n", i);
        else
            printf("Pause      (T%d)\n", i);
    }

    return 0;
}
