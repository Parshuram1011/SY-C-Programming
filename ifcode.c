#include <stdio.h>
int main() {
    int number ;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("%d is positive.\n", number);
    }
    else{
        printf("%d is not positive.\n", number);
    }
    return 0;
}