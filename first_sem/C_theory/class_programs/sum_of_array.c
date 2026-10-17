#include<stdio.h>
int sum_array(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    return sum;
}
int main(){
    int sum;
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &array[i]);
    }
    sum = sum_array(array, size);
    printf("Element=\t");
    for (int i = 0; i < size; i++) {
        printf("%d\t ", array[i]);
    }
    printf("\nSum of array elements is %d\n", sum);
    return 0;
}
