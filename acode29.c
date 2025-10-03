#include <stdio.h>

int main() {
    int n, sq;
    printf("Enter number: ");
    scanf("%d", &n);
    sq = n * n;

    int temp = n, flag = 1;
    while(n > 0) {
        if(n % 10 != sq % 10) {
            flag = 0;
            break;
        }
        n /= 10;
        sq /= 10;
    }

    if(flag)
        printf("Automorphic Number\n");
    else
        printf("Not Automorphic\n");

    return 0;
}
