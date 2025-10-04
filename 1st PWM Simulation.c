#include<stdio.h>
int main(){
    
    int duty = 5;
    int period =  10;
    int i;
    
    printf("PWM stomulation;\n");
    for(i=1; i<=10; i++)

    if(i<duty)
       printf("1");
    else
      printf("0");
return 0;
    
}