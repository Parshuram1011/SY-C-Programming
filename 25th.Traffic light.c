#include <stdio.h>
int main() {
    int i; 
    char c;
    
    for(i=1;i<=3;i++){
        printf("Enter light (R/Y/G): ");
        scanf(" %c",&c);
        if(c=='R') 
          printf("STOP\n");
        else if(c=='Y')
          printf("WAIT\n");
        else if(c=='G') 
          printf("GO\n");
        else 
          printf("Invalid\n");
    }
    return 0;
}
