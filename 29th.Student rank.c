#include <stdio.h>
int main() {
    int i,rank;
    for(i=1;i<=3;i++){
        printf("Enter rank: ");
        scanf("%d",&rank);
        if(rank==1) 
           printf("Topper\n");
        else if(rank<=10) 
             printf("Excellent\n");
        else 
            printf("Average\n");
    }
    return 0;
}
