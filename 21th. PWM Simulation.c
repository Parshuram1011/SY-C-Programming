#include<stdio.h>
int main(){
    int duty = 2;
    int period = 5;
    int i;
    printf("PWM simulation:\n");
    for(i=1; i<=period; i++)
        if(i<=duty)
            printf("1");
        else
            printf("0");
    return 0;
}
