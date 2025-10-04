#include <stdio.h>
int main() {
    int i, marks;

    for(i=1; i<=4; i++) {   
        printf("Enter marks: ");
        scanf("%d",&marks);

        if(marks >= 90)   
          printf("Grade: A\n");
        else if(marks >= 75)
           printf("Grade: B\n");
        else if(marks >= 50) 
           printf("Grade: C\n");
        else 
          printf("Grade: Fail\n");
    }

    return 0;
}

