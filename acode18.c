#include <stdio.h>
#include <math.h>

int main() {
    int base, exp, result;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    result = pow(base, exp);
    printf("Result = %d\n", result);
    return 0;
}
