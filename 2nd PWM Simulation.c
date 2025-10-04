#include<stdio.h>
int main(){
    
    int duty = 50;
    int period =  100;
    int i;
    
    printf("PWM stomulation;\n");
    for(i=1; i<=100; i++)

    if(i<duty)
       printf("1");
    else
      printf("0");
return 0;
    
}