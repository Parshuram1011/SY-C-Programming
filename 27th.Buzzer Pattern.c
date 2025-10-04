#include <stdio.h>

int main() {
    int duty = 3;
    int period = 8;
    int i;

    printf("Buzzer Pattern:\n");
    for(i = 1; i <= period; i++) {
        if(i <= duty)
            printf("Beep! ");
        else
            printf("- ");
    }

    printf("\n");
    return 0;
}
