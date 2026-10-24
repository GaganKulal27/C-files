#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;  // Base case
    else
        return n * factorial(n - 1);  // Recursive case
}

int read_size()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);
    return size;
}

int sum(int arr[], int array_size)
{
    if (array_size == 0)
        return 0;  // Base case
    else
        return arr[array_size - 1] + sum(arr, array_size - 1);
        // Recursive case
}

int main()
{
    int num, result;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Invalid number!\n");
    else
    {
        result = factorial(num);
        printf("Factorial of %d is %d\n", num, result);
    }

    int size = read_size();

    if (size < 0 || size > 100)
    {
        printf("Invalid array size!\n");
        return 0;
    }

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Sum of array elements is %d\n", sum(arr, size));

    return 0;
}