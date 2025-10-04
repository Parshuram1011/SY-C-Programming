#include <stdio.h>
int main() {
    int i, age;
    for(i=1; i<=3; i++) {
        printf("Enter age: ");
        scanf("%d",&age);
        if(age < 13) 
           printf("Child\n");
        else if(age < 20) 
           printf("Teen\n");
        else if(age < 60) .
            printf("Adult\n");
        else 
           printf("Senior\n");
    }
    return 0;
}
