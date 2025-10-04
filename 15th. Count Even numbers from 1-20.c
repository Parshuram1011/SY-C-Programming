#include <stdio.h>

int main() {
 int i,count=0;
 for(i=1; i<=20; i++){
 
 if(i % 2){
     count++;
 }
  }   printf("total even number between 1-20 = %d\n", count);

 return 0 ;
}