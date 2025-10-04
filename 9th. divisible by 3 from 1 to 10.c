#include <stdio.h>

int main() {
 int i;
 for(i=1; i<=10; i++)
 
 if(i%3 == 0){
     printf("%d is divisible by 3\n", i);
}else{
     printf("%d is not divisble by 3\n", i);
 } return 0 ;
}