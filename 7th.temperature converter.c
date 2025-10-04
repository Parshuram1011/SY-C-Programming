#include <stdio.h>

int main() {
    float c, f;
    printf("Enter temp in Celsius: ");
    scanf("%f", &c);
    f = c * 9/5 + 32;
    printf("Fahrenheit: %.2f\n", f);

    if (c < 0) printf("Freezing\n");
    else if (c < 25) printf("Cold\n");
    else if (c < 35) printf("Warm\n");
    else printf("Hot\n");

    return 0;
}
