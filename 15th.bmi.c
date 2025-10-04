#include <stdio.h>
int main() {
    float w,h,bmi;
    scanf("%f%f",&w,&h);
    bmi = w/(h*h);

    if(bmi < 18.5)
        printf("Underweight\n");
    else if(bmi < 25) 
        printf("Normal\n");
    else if(bmi < 30)
        printf("Overweight\n");
    else 
       printf("Obese\n");
   
    return 0;
}
