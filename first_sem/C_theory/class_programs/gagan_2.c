#include <stdio.h>

int main() {
    int firstnumber, secondnumber, choice;
    //while (choice!=5){
    do
    {
    printf("-------- Welcome to My Calculator --------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
        if (choice == 1) {
            printf("Enter the first number: ");
            scanf("%d", &firstnumber);

            printf("Enter the second number: ");
            scanf("%d", &secondnumber);

            printf("The sum is: %d\n", firstnumber + secondnumber);
        }
        else {
            if (choice == 2) {
                printf("Enter the first number: ");
                scanf("%d", &firstnumber);

                printf("Enter the second number: ");
                scanf("%d", &secondnumber);

                printf("The difference is: %d\n", firstnumber - secondnumber);
            }
            else {
                if (choice == 3) {
                    printf("Enter the first number: ");
                    scanf("%d", &firstnumber);

                    printf("Enter the second number: ");
                    scanf("%d", &secondnumber);

                    printf("The product is: %d\n", firstnumber * secondnumber);
                }
                else {
                    if (choice == 4) {
                        printf("Enter the first number: ");
                        scanf("%d", &firstnumber);

                        printf("Enter the second number: ");
                        scanf("%d", &secondnumber);

                        if (secondnumber == 0) {
                            printf("Error! Division by zero is not allowed.\n");
                        }
                        else {
                            printf("The quotient is: %d\n", firstnumber / secondnumber);
                        }
                    }
                     else {
                        printf("Exit\n");
                    }
                }
            }
        }

        printf("------ End ------\n");
        return 0;
    }while(choice!=5);
}