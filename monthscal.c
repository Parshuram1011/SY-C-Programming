#include <stdio.h>
int main() {
    int days, months ;
    printf("Enter number of months:");
    scanf("%d", &months);
    days = months * 30;
    printf("days: %d, months: %d\n", days, months);
    return 0;
}