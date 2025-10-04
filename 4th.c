#include <stdio.h>

int main() {
    int lux;
    printf("Enter lux reading: ");
    scanf("%d", &lux);

    if (lux < 100) printf("Environment: Dark\n");
    else if (lux < 500) printf("Environment: Dim\n");
    else printf("Environment: Bright\n");

    return 0;
}
