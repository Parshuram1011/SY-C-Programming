#include <stdio.h>

int main() {
 int i;
 for(i=1; i<=50; i++)
 
 if(i % 5 == 0){
     printf("%d is a miltiple of 5\n", i);
}else{
     printf("%d is not a miltiple of 5\n", i);
 } return 0 ;
}