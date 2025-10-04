#include <stdio.h>

int main() {
    int duty = 5;
    int period = 12;
    int i;

    printf("AC Compressor Cycle:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Compressor ON   %d\n", i);
        else
            printf("Compressor OFF  %d\n", i);
    }

    return 0;
}
