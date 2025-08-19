// Read Integer N and Print the First Three Powers (N^1, N^2, N^3).


#include <stdio.h>
#include <math.h>   // for pow()

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The 1st power of %d is %.0f\n", n, pow(n, 1));
    printf("The 2nd power of %d is %.0f\n", n, pow(n, 2));
    printf("The 3rd power of %d is %.0f\n", n, pow(n, 3));

    return 0;
}
