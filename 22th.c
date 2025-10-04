#include <stdio.h>
int main() {
    int i;
    float t;
    for(i=1; i<=3; i++) {
        printf("Enter body temp: ");
        scanf("%f",&t);
        if(t < 100) printf("Normal\n");
        else if(t < 150) printf("Warning\n");
        else printf("Critical\n");
    }
    return 0;
}
