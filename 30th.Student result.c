#include <stdio.h>
int main() {
    int i,p;
    for(i=1;i<=3;i++){
        printf("Enter paper marks: ");
        scanf("%d",&p);
        if(p<40) 
            printf("Fail\n");
        else if(p<=60)
            printf("Average\n");
        else 
            printf("Good\n");
    }
    return 0;
}
