#include <stdio.h>
int main() {
    int num1, num2, difference;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    difference = num1 - num2;
    printf("Difference of %d and %d is %d\n", num1, num2, difference);
    return 0;
}