#include <stdio.h>

int main() {
    int n, key, flag = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(int i=0;i<n;i++) {
        if(arr[i] == key) {
            printf("Element found at position %d\n", i+1);
            flag = 1;
            break;
        }
    }

    if(!flag) printf("Element not found\n");
    return 0;
}
