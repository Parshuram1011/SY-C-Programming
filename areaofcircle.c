#include<stdio.h>
int main() {
  float radius, area_of_circle, circumference_of_circle;
  float PI = 3.14159;
 printf("Enter the Radius of Circle: ");
  scanf("%f", & radius);
area_of_circle = PI * radius * radius;
 printf("\n\narea of circle program in c is = %f ", area_of_circle);
  circumference_of_circle = 2 * PI * radius;
 printf("\n\nCircumference of Circle is = %f \n", circumference_of_circle);
  return (0);
}