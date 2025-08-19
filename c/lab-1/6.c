// WAP to find the roots of a quadratic equation of the form ax2+bx+c=0.


#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2;
    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d >= 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots: %.2lf , %.2lf\n", r1, r2);
    } else {
        printf("Complex roots\n");
    }

    return 0;
}
