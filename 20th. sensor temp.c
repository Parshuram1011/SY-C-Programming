#include <stdio.h>
int main() {
    int i;
    float sensor_temp;

    for(i=1; i<=3; i++) {
        printf("Enter body temp: ");
        scanf("%f",&sensor_temp);

        if(sensor_temp < 100) 
          printf("Status: Normal\n");
        else if(sensor_temp < 150)
          printf("Status: Warning\n");
        else
          printf("Status: Critical\n");
    }

    return 0;
}