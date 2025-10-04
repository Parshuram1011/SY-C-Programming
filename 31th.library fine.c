#include <stdio.h>
int main() {
    int i,days;
    for(i=1;i<=3;i++){
        printf("Enter delay days: ");
        scanf("%d",&days);
        if(days<=0) 
            printf("No Fine\n");
        else if(days<=5)
             printf("Fine=Rs.10\n");
        else 
             printf("Fine=Rs.50\n");
    }
    return 0;
}
