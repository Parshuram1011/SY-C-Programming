#include <stdio.h>
int main() {
    int a,b,x,y;
    scanf("%d%d",&a,&b);
    x=a; y=b;
    while(x!=y){ if(x<y) x+=a; else y+=b; }
    printf("LCM=%d",x);
}
