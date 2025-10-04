#include <stdio.h>

int main() {
    int duty = 2;
    int period = 6;
    int i;

    printf("Heartbeat Pattern:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("❤️  ");
        else
            printf("   ");
    }

    printf("\n");
    return 0;
}
