#include <stdio.h>
int main() {
    int n,i,x,l=0,h,m,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    h=n-1;
    while(l<=h){
        m=(l+h)/2;
        if(a[m]==x){ f=1; break; }
        else if(a[m]<x) l=m+1;
        else h=m-1;
    }
    if(f) printf("Found");
    else printf("Not Found");
}
