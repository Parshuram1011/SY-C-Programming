#include <stdio.h>

int main() {
    int duty = 3;
    int period = 7;
    int i;

    printf("Alarm Siren Cycle:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("SIREN ON (Second %d)\n", i);
        else
            printf("Silent   (Second %d)\n", i);
    }

    return 0;
}
