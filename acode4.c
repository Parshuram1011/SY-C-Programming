#include <stdio.h>
#define PI 3.1416

int main() {
    float r, area;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area = %.2f\n", area);
    return 0;
}
