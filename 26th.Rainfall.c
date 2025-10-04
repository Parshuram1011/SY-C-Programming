#include <stdio.h>
int main() {
    int i,r;
    for(i=1;i<=3;i++){
        printf("Enter rainfall (mm): ");
        scanf("%d",&r);
        if(r<50) 
               printf("Low Rain\n");
        else if(r<=100)
                printf("Moderate Rain\n");
        else 
            printf("Heavy Rain\n");
    }
    return 0;
}

