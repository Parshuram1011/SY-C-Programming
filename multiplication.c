#include <stdio.h>
int main() {
    int a, b, product;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    product = a * b;
    printf("The multiplication of %d and %d is %d\n", a, b, product);
    return 0;
    
}