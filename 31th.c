#include <stdio.h>

int main() {
    int duty = 4;
    int period = 10;
    int i;

    printf("Sprinkler Timing:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Watering plants (Minute %d)\n", i);
        else
            printf("Sprinkler off   (Minute %d)\n", i);
    }

    return 0;
}
