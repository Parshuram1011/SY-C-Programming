#include <stdio.h>

int main() {
    float speed;
    printf("Enter speed (km/h): ");
    scanf("%f", &speed);

    if (speed <= 60) printf("Within limit\n");
    else if (speed <= 80) printf("Overspeed - Fine\n");
    else printf("Dangerous - License suspend possible\n");

    return 0;
}
