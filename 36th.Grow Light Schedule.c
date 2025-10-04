#include <stdio.h>

int main() {
    int duty = 5;
    int period = 8;
    int i;

    printf("Grow Light Schedule:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Light ON  (Hour %d)\n", i);
        else
            printf("Light OFF (Hour %d)\n", i);
    }

    return 0;
}
