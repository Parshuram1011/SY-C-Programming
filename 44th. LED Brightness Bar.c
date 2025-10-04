#include <stdio.h>

int main() {
    int duty = 7;
    int period = 10;
    int i;

    printf("LED Brightness Bar:\n[");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("#");
        else
            printf("-");
    }
    printf("]\n");

    return 0;
}
