#include <stdio.h>

int main() {
 int i,count=0;
 for(i=1; i<=20; i++){
 
 if(i % 2 !=0){
     count++;
 }
  }   printf("total odd number between 1-20 = %d\n", count);

 return 0 ;
}