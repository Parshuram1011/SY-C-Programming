#include <stdio.h>
int main() {
    int i,len;
    for(i=1;i<=3;i++){
        printf("Enter password length: ");
        scanf("%d",&len);
        if(len<6)
           printf("Weak\n");
        else if(len<10) 
            printf("Medium\n");
        else
           printf("Strong\n");
    }
    return 0;
}
