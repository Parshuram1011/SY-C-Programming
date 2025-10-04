#include <stdio.h>
int main() {
    int i; float sugar;
    for(i=1; i<=3; i++) {
        printf("Enter sugar: ");
        scanf("%f",&sugar);
        if(sugar < 70) 
          printf("Low\n");
        else if(sugar <= 140) 
          printf("Normal\n");
        else 
          printf("High\n");
    }
    return 0;
}
