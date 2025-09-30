#include <stdio.h>
int main() {
    int temperature = 30;

if (temperature < 0) {
  printf("It's freezing!\n");
} else if (temperature < 20) {
  printf("It's cool.\n");
} else {
  printf("It's warm.\n");
}
    return 0;
}