#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, rem, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;

    while(n != 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    if(sum == temp)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
