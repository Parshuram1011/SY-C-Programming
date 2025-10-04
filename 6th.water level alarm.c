#include <stdio.h>

int main() {
    float level;
    printf("Enter water level (cm): ");
    scanf("%f", &level);

    if (level < 20.0) printf("Tank: Low\n");
    else if (level < 80.0) printf("Tank: OK\n");
    else printf("Tank: Overflow - Alarm!\n");

    return 0;
}
