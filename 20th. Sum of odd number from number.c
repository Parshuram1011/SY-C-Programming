#include <stdio.h>

int main() {
    int n, digit, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
for(n>0; n/=10;){
    digit = n%10;
   if(digit % 2){
       sum += digit;
       
   }
}
printf("sum of odd digits = %d\n", sum);

    return 0;