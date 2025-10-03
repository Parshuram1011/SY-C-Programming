#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    float arr[n];
    printf("Enter numbers: ");
    for(i=0; i<n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    printf("Average = %.2f\n", sum/n);
    return 0;
}
