#include <stdio.h>
#include <math.h>

void solveQuadraticEquation(double a, double b, double c) {
    double discriminant, root1, root2, realPart, imaginaryPart;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Корень 1 = %.2lf\n", root1);
        printf("Корень 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Корень = %.2lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Корень 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Корень 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;
    printf("Введите коэффициенты a, b и c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    solveQuadraticEquation(a, b, c);

    return 0;
}