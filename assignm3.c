#include <stdio.h>
int main() {
    int temperature;
    int warningThreshold = 50;   
    int criticalLimit = 80;      
    printf("Enter temperature sensor value: ");
    scanf("%d", &temperature);
    if (temperature < warningThreshold) {
        printf("Status: Normal\n");
    }
    else if (temperature >= warningThreshold && temperature < criticalLimit) {
        printf("Status: Warning\n");
    }
    else {
        printf("Status: Critical\n");
    }

    return 0;
}
