#include <stdio.h>

int main() {
    int n, count = 1;
    printf("Enter a number:");
scanf("%d", &n);

for(n>0; n/=10;){
   count++;
}
printf("Total digit = %d\n", count);
    return 0;
}