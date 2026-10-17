#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;

    printf("Enter first numbers: ");
    scanf("%d ", &a);
    printf("Enter second numbers: ");
    scanf("%d ", &b);
    printf("Enter third numbers: ");
    scanf("%d ", &c);

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("\n====================================\n");
    printf("    LARGEST AND SMALLEST NUMBER\n");
    printf("====================================\n");
    printf("Number 1 : %d\n", a);
    printf("Number 2 : %d\n", b);
    printf("Number 3 : %d\n", c);
    printf("------------------------------------\n");
    printf("Largest  : %d\n", largest);
    printf("Smallest : %d\n", smallest);
    printf("====================================\n");

    return 0;
}
