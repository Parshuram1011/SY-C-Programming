#include <stdio.h>

int main() {
    int n, temp, rem, fact, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;

    while(n > 0) {
        rem = n % 10;
        fact = 1;
        for(int i=1; i<=rem; i++)
            fact *= i;
        sum += fact;
        n /= 10;
    }

    if(sum == temp)
        printf("Strong Number\n");
    else
        printf("Not Strong\n");

    return 0;
}
