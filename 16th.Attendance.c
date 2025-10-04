#include <stdio.h>
int main() {
    int att;
    printf("Enter attendance:");
    scanf("%d",&att);

    if(att >= 75) 
      printf("Eligible for exam\n");
    else if(att >= 50)
      printf("Warning: Low attendance\n");
    else 
      printf("Not eligible\n");

    return 0;
}
