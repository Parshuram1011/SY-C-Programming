#include <stdio.h>
int main() {
    int i, level;

    for(i=1; i<=3; i++) { 
        printf("Enter battery level (0-100): ");
        scanf("%d",&level);

        if(level < 20) 
          printf("Battery: Low\n");
        else if(level < 80) 
           printf("Battery: Medium\n");
        else 
          printf("Battery: High\n");
    }

    return 0;
}
