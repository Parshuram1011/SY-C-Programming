#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}
