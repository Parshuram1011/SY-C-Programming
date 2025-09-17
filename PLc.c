#include <stdio.h>
int main() {
    float costPrice, sellingPrice;
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);
    if (sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        printf("Congratulations! You made a Profit of: %.2f\n", profit);
    }
    else if (costPrice > sellingPrice) {
        float loss = costPrice - sellingPrice;
        printf("Sorry, you made a Loss of: %.2f\n", loss);
    }
    else {
        printf("No Profit, No Loss.\n");
    }
    return 0;
}