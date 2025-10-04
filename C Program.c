#include <stdio.h>

int main() {
    float threshold = 80, critical_temp = 100, sensor_temp;
    printf("Enter your body temp: ");
    scanf("%f", &sensor_temp);

    if (sensor_temp < threshold) {
        printf("Patient Status: Normal");
    } else if (sensor_temp >= threshold && sensor_temp < critical_temp) {
        printf("Patient Status: Warning");
    } else {
        printf("Patient Status: Critical");
    }

return 0;
}