#include <stdio.h>

int main() {
 int i, n, max=-9999;
 for(i=1; i<=10; i++){
 printf("Enter number %d;", i);
 scanf("%d",  &n);
 if(n > max){
     max = n;
 }
  }   printf("largest number = %d\n", max);

 return 0 ;
}