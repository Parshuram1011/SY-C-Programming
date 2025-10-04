#include <stdio.h>

int main() {
    int duty = 5;
    int period = 10;
    int i;

    printf("Digital Signal:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("|‾");
        else
            printf("_");
    }
    printf("|\n");

    return 0;
}
