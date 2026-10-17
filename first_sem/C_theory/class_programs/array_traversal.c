#include <stdio.h>
int read_array_size() {
    int size;
    printf("Enter the size of array [size > 4]: ");
    scanf("%d", &size);
    return size;
}
int validate_array_size(int size) {
    if (size > 4) {
        return 1;
    } else {
        return 0;
    }
}
void input_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &array[i]);
    }
}
void display_array(int array[], int size) {
    printf("\nArray elements are: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}
int sum_array(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    return sum;
}
int main() {
    int isvalid = 1;
    int arraysize;
    while (isvalid == 1) {
        arraysize = read_array_size();
        int validated = validate_array_size(arraysize);
        if (validated == 1) {
            break;
        } else {
            printf("Array size is not valid. Please try again.\n");
        }
    }
    // Declare array after getting a valid size
    int myarray[arraysize];
    input_array(myarray, arraysize);
    display_array(myarray, arraysize);
    int sum = sum_array(myarray, arraysize);
    printf("Sum of array elements = %d\n", sum);
    return 0;
}