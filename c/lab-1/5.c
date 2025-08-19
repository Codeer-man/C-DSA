// Find the square root of an input number.


#include <stdio.h>
#include <math.h>   // for sqrt()

int main() {
    double num, result;

    printf("Enter a number: ");
    scanf("%lf", &num);  

    result = sqrt(num);

    printf("The square root of %.2lf is %.2lf\n", num, result);

    return 0;
}
