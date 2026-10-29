// menu driven program using stack data structure
#include <stdio.h>
#define SIZE 5

int stack[SIZE];

void push(int x, int size, int *top) {
    if (*top >= size - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++(*top)] = x;
    printf("%d pushed to stack\n", x);
    return;
}

void pop(int size, int *top) {
    if (*top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    int y = stack[(*top)--];
    printf("%d popped from stack\n", y);
    return;
}

void display(int size, int *top) {
    if (*top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = *top; i > -1; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
    return;
}

int main() {
    int choice, z, top = -1;
    while (1) {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            return 1;
        }
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                if (scanf("%d", &z) != 1) {
                    return 1;
                }
                push(z, SIZE, &top);
                break;
            case 2:
                pop(SIZE, &top);
                break;
            case 3:
                display(SIZE, &top);
                break;
            case 4:
                printf("THANK YOU\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}