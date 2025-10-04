#include <stdio.h>

int main() {
    int i;
    
for(i=2; i<=50; i++){
   if(i%3 && i%5){
       printf("%d\n", i);
   }
}

    return 0;