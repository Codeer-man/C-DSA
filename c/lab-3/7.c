// Find LCM of Two Numbers.


#include <stdio.h>

int main() {
    int a, b, hcf, lcm, x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;

    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
