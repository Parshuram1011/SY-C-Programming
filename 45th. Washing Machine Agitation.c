#include <stdio.h>

int main() {
    int duty = 3;
    int period = 8;
    int i;

    printf("Washing Machine Agitation:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Agitating...  %d\n", i);
        else
            printf("Paused     %d\n", i);
    }

    return 0;
}
