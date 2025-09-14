#include <stdio.h>
int main() {
    int units, custnum;
    float charges;
    printf("Enter CUSTOMER No. and UNITS consumed\n");
    scanf("%d %d", &custnum, &units);
    if (units <=200)
    charges = units * 0.50;
    else if (units <=400)
    charges = 100 + (units - 200) * 0.65;
    else if (units <=600)
    charges = 230 + (units - 400) * 0.80;
    else
    charges = 390 + (units - 600);
    printf("\n\nCustomer No.: %d: Charges = %.2f\n", custnum, charges);
    return 0;
}