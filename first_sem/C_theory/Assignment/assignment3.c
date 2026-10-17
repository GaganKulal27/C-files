#include <stdio.h>

int main() {
    int choice;
    int a, b;
    float x, y;

    printf("====================================\n");
    printf("       MENU-DRIVEN CALCULATOR\n");
    printf("====================================\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("====================================\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nEnter first numbers: ");
            scanf("%f", &x);
            printf("\nEnter second numbers: ");
            scanf("%f", &y);
            printf("Addition = %.2f\n", x + y);
            break;

        case 2:
            printf("\nEnter first numbers: ");
            scanf("%f", &x);
            printf("\nEnter second numbers: ");
            scanf("%f", &y);
            printf("Subtraction = %.2f\n", x - y);
            break;

        case 3:
            printf("\nEnter first numbers: ");
            scanf("%f", &x);
            printf("\nEnter second numbers: ");
            scanf("%f", &y);
            printf("Multiplication = %.2f\n", x * y);
            break;

        case 4:
           printf("\nEnter first numbers: ");
            scanf("%f", &x);
            printf("\nEnter second numbers: ");
            scanf("%f", &y);
            if (y != 0)
                printf("Division = %.2f\n", x / y);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        case 5:
            printf("\nEnter first integers: ");
            scanf("%d", &a);
            printf("\nEnter second integers: ");
            scanf("%d", &b);

            if (b != 0)
                printf("Modulus = %d\n", a % b);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;

        default:
            printf("\nInvalid choice! Please select 1 to 5.\n");
    }

    printf("\n====================================\n");

    return 0;
}
