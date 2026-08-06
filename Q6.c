#include <stdio.h>

int main() {
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
// 1 is Even and 0 is Odd
    printf("%d", a % 2 == 0);
    return 0;
}
