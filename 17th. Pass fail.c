#include <stdio.h>
int main() {
    int m;
    scanf("%d",&m);

    if(m >= 75)
      printf("Distinction\n");
    else if(m >= 40) 
      printf("Pass\n");
    else 
      printf("Fail\n");

    return 0;
}
