#include <stdio.h>

int main() {
    int a;
    printf("Enter any number : ");
    scanf("%d", &a);

    // 1 is divisible by 2 and 0 is not divisible by 2

    printf("%d", a % 2 == 0);
    return 0;
}
