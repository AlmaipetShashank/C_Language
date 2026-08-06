#include <stdio.h>

int main() {
    int a;
    printf("Enter any number : ");
    scanf("%d", &a);

    // 1 is true and 0 is false

    printf("%d", a % 2 == 0);
    return 0;
}
