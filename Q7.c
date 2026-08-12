#include <stdio.h>

int main() {

    // This is Valid
    int a = 8 ^ 8;
    printf("%d", a);

    // This is Valid
    int x; int y = x;
    printf("%d", y);

    // This is Invalid
    int n,  m = n;
    printf("%d", m);

    // This is Invalid
    char stars = '**';
    printf("%d", stars);

    return 0;
}
