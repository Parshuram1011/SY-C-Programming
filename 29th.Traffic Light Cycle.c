#include <stdio.h>

int main() {
    int duty = 3;      
    int period = 6;    
    int i;

    printf("Traffic Light Cycle:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Green Light ON (Time %d)\n", i);
        else
            printf("Red Light ON   (Time %d)\n", i);
    }

    return 0;
}
