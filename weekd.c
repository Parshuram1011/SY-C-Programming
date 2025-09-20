#include <stdio.h>

int main() {
    int week;
    printf("Enter week number (1-7): ");
    scanf("%d", &week);

    if (week == 1)
        printf("Monday\n");
    else if (week == 2)
        printf("Tuesday\n");
    else if (week == 3)
        printf("Wednesday\n");
    else if (week == 4)
        printf("Thursday\n");
    else if (week == 5)
        printf("Friday\n");
    else if (week == 6)
        printf("Saturday\n");
    else if (week == 7)
        printf("Sunday\n");
    else
        printf("Invalid input! Please enter a week number between 1 and 7.\n");

    return 0;
}
