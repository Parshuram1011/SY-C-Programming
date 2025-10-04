
#include <stdio.h>

int main()
{
 float weight, height, bmi;
 printf("Enter weight: ");
 scanf("%f", &weight);
 printf("Enter height: ");
 scanf("%f", &height);
 
 bmi = weight / (height*height);
 printf("bmi =%2f ",bmi);
 
if(bmi < 18.5)
 printf("Underweight");

else if(bmi >18.5)
 printf("normal");
 else
 printf("overweight");
 
               
 
    return 0;
}