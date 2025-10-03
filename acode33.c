#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter expression (a + b): ");
    scanf("%d %c %d", &a, &op, &b);

    if(op == '+') printf("Result = %d\n", a+b);
    else if(op == '-') printf("Result = %d\n", a-b);
    else if(op == '*') printf("Result = %d\n", a*b);
    else if(op == '/') printf("Result = %d\n", a/b);
    else printf("Invalid Operator\n");

    return 0;
}
