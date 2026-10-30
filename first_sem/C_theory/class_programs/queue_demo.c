// menu driven program using queue data structure
#include <stdio.h>
#define SIZE 5
int queue[SIZE];

void enqueue(int x, int size, int *front, int *rear) {
    if (*rear == size - 1) {
        printf("Queue is full. Cannot enqueue %d\n", x);
        return;
    }
    (*rear)++;
    queue[*rear] = x;
    printf("%d enqueued to queue\n", x);
}
void dequeue(int size, int *front, int *rear) {
    if (*front == *rear) {
        printf("Queue is empty. Cannot dequeue\n");
        return;
    }
    (*front)++;
    int y = queue[*front];
    printf("%d dequeued from queue\n", y);
}

void display(int size, int *front, int *rear) {
    if (*front == *rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = *front + 1; i <= *rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int front = -1, rear = -1;
    int choice, z;
    while (1) {
        printf("Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &z);
                enqueue(z, SIZE, &front, &rear);
                break;
            case 2:
                dequeue(SIZE, &front, &rear);
                break;
            case 3:
                display(SIZE, &front, &rear);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}