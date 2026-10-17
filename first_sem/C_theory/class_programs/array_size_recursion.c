#include<stdio.h>
int read_size(){
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);
    return size;
}

int sum(int arr[], int array_size) {
    if (array_size == 0) {
        return 0;
    }
    return arr[array_size - 1] + sum(arr, array_size - 1);
}

int main() {
    int size = read_size();
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Sum of array elements is %d\n", sum(arr, size));
    return 0;
}