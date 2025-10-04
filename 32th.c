#include <stdio.h>
int main() {
    int i,v;
    for(i=1;i<=3;i++){
        printf("Enter no. of vehicles: ");
        scanf("%d",&v);
        if(v<20)
           printf("Low Traffic\n");
        else if(v<=50)
           printf("Moderate Traffic\n");
        else
             printf("Heavy Traffic\n");
    }
    return 0;
}
