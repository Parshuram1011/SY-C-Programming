#include <stdio.h>

int main() {
 int i, n, min=9999;
 for(i=1; i<=10; i++){
 printf("Enter number %d;", i);
 scanf("%d",  &n);
 if(n < min){
     min = n;
 }
  }   printf("smallest number = %d\n",min);

 return 0 ;
}