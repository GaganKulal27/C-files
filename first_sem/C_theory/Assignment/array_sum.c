#include <stdio.h>

// Function to read array elements
void readArray(int a[], int n)
{
    int i;
    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

// Function to traverse and display array elements with index
void traverseArray(int a[], int n)
{
    int i;
    printf("\nArray elements with their indices:\n");

    for (i = 0; i < n; i++)
    {
        printf("Index %d: %d\n", i, a[i]);
    }
}

// Function to calculate and return the sum
int calculateSum(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return sum;
}

int main()
{
    int a[100], n, sum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid array size!\n");
        return 1;
    }

    readArray(a, n);
    traverseArray(a, n);

    sum = calculateSum(a, n);

    printf("\n-----------------------------\n");
    printf("Sum of array elements = %d\n", sum);
    printf("-----------------------------\n");

    return 0;
}