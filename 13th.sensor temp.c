#include <stdio.h>

int main() {
    float threshold = 100, critical_temp = 150, sensor_temp;
    printf("Enter your body temp: ");
    scanf("%f", &sensor_temp);

    if (sensor_temp < threshold) {
        printf("Patient Status: Normal\n");
    } else if (sensor_temp >= threshold && sensor_temp < critical_temp) {
        printf("Patient Status: Warning\n");
    } else {
        printf("Patient Status: Critical\n");
    }

    return 0;
}
