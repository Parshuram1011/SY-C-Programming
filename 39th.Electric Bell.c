#include <stdio.h>

int main() {
    int duty = 3;
    int period = 5;
    int i;

    printf("Electric Bell:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Buzz! ");
        else
            printf("... ");
    }

    printf("\n");
    return 0;
}
