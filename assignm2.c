#include <stdio.h>
int main() {
    float sensor1, sensor2, sum;
    printf("Enter the value of sensor1: ");
    scanf("%f", &sensor1);
    printf("Enter the value of sensor2: ");
    scanf("%f", &sensor2);
    sum = sensor1 + sensor2;
    printf("The sum of sensor1 and sensor2 is: %.2f\n", sum);
    return 0;

}