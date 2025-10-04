#include <stdio.h>

int main() {
    int a, b, tempA, tempB;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    while (a != b) {
        if (a < b) a += tempA;
        else b += tempB;
    }

    printf("LCM = %d\n", a);
    return 0;
}
