#include <stdio.h>

int main() {
    int duty = 4;
    int period = 6;
    int i;

    printf("Sensor Pulse Output:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Pulse HIGH ");
        else
            printf("Pulse LOW ");
    }

    printf("\n");
    return 0;
}
