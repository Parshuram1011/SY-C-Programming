#include <stdio.h>
int main() {
    int i,sys;
    for(i=1;i<=3;i++){
        printf("Enter systolic BP: ");
        scanf("%d",&sys);
        if(sys<90)
           printf("Low BP\n");
        else if(sys<=120) 
            printf("Normal BP\n");
        else          
            printf("High BP\n");
    }
    return 0;
}

