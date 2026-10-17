#include <stdio.h>

int main() {
    int a = 20, b = 6;
    float x = 20.5f, y = 6.0f;
    double p = 20.5, q = 6.0;
    char c1 = 'A', c2 = 'B';

    printf("============================================\n");
    printf("       ARITHMETIC OPERATIONS IN C\n");
    printf("============================================\n\n");

    printf("Integer Operations\n");
    printf("--------------------------------------------\n");
    printf("Values: a = %d, b = %d\n", a, b);
    printf("Addition       : %d + %d = %d\n", a, b, a + b);
    printf("Subtraction    : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division       : %d / %d = %d\n", a, b, a / b);
    printf("Modulus        : %d %% %d = %d\n\n", a, b, a % b);

    printf("Float Operations\n");
    printf("--------------------------------------------\n");
    printf("Values: x = %.2f, y = %.2f\n", x, y);
    printf("Addition       : %.2f + %.2f = %.2f\n", x, y, x + y);
    printf("Subtraction    : %.2f - %.2f = %.2f\n", x, y, x - y);
    printf("Multiplication : %.2f * %.2f = %.2f\n", x, y, x * y);
    printf("Division       : %.2f / %.2f = %.2f\n\n", x, y, x / y);

    printf("Double Operations\n");
    printf("--------------------------------------------\n");
    printf("Values: p = %.2lf, q = %.2lf\n", p, q);
    printf("Addition       : %.2lf + %.2lf = %.2lf\n", p, q, p + q);
    printf("Subtraction    : %.2lf - %.2lf = %.2lf\n", p, q, p - q);
    printf("Multiplication : %.2lf * %.2lf = %.2lf\n", p, q, p * q);
    printf("Division       : %.2lf / %.2lf = %.2lf\n\n", p, q, p / q);

    printf("Character Operations\n");
    printf("--------------------------------------------\n");
    printf("Characters: c1 = '%c' (%d), c2 = '%c' (%d)\n",
           c1, c1, c2, c2);
    printf("Addition       : %d + %d = %d\n", c1, c2, c1 + c2);
    printf("Subtraction    : %d - %d = %d\n", c1, c2, c1 - c2);
    printf("Multiplication : %d * %d = %d\n", c1, c2, c1 * c2);
    printf("Division       : %d / %d = %d\n", c1, c2, c1 / c2);
    printf("Modulus        : %d %% %d = %d\n", c1, c2, c1 % c2);

    printf("\n============================================\n");

    return 0;
}
