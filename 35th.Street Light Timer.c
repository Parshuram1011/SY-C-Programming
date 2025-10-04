#include <stdio.h>

int main() {
    int duty = 9;
    int period = 12;
    int i;

    printf("Street Light Timer:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Street Light ON  (Hour %d)\n", i);
        else
            printf("Street Light OFF (Hour %d)\n", i);
    }

    return 0;
}
