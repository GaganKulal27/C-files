// menu driven program using queue data structure
#include <stdio.h>
#define size 5
int queue[size];
int front=-1,rear=-1;

int is_full(){
    if (rear==size-1)
    {
        printf("Queue is full..Cant store further data");
        return 1;
    }
    return 0;
}

int is_empty(){
    if (front==rear){
        printf("Queue is empty..");
        return 1;
    }
    return 0;
}

void enqueue(int x){
    if (is_full())
    {
        printf("Queue is Overflow");  
        return; 
    }
    rear++;
    queue[rear] = x;
    printf("%d enqueued to queue\n", x);
    return;
}
void dequeue() {
    if (is_empty()) {
        printf("Queue Underflow\n");
        return;
    }
    front++;
    int y = queue[front];
    printf("%d dequeued from queue\n", y);
    return;
}
void display() {
    if (is_empty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front+1; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
    return;
}

int main() {
    int choice, z;
    while (1) {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            return 1;
        }
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                if (scanf("%d", &z) != 1) {
                    return 1;
                }
                enqueue(z);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("THANK YOU\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
