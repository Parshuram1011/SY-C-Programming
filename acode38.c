#include <stdio.h>

int main() {
    char str[200];
    int count = 1;
    printf("Enter sentence: ");
    scanf(" %[^\n]", str);

    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]==' ' || str[i]=='\t')
            count++;
    }

    printf("Words = %d\n", count);
    return 0;
}
