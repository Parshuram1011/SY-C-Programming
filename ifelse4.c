#include <stdio.h>
#include <stdbool.h>
int main() {
    bool isLoggedIn = true;
    bool isAdmin = false;
int securityLevel = 3; 
if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
  printf("Access granted\n");
} else {
  printf("Access denied\n");
}
    return 0;
}