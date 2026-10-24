#include <stdio.h>

int main()
{
    int a[100], n, i, ch, pos, ele;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 0 || n > 100)
        return 0;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    do
    {
        printf("\n1.Insert  2.Delete  3.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        printf("Array before operation: ");
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");

        if (ch == 1)
        {
            if (n == 100)
            {
                printf("Array is full!\n");
                continue;
            }

            printf("Enter index and element: ");
            scanf("%d%d", &pos, &ele);

            if (pos < 0 || pos > n)
                printf("Invalid index!\n");
            else
            {
                for (i = n; i > pos; i--)
                    a[i] = a[i - 1];

                a[pos] = ele;
                n++;
            }
        }
        else if (ch == 2)
        {
            if (n == 0)
                printf("Array is empty!\n");
            else
            {
                printf("Enter index to delete: ");
                scanf("%d", &pos);

                if (pos < 0 || pos >= n)
                    printf("Invalid index!\n");
                else
                {
                    for (i = pos; i < n - 1; i++)
                        a[i] = a[i + 1];

                    n--;
                }
            }
        }
        else if (ch != 3)
            printf("Invalid choice!\n");

        if (ch == 1 || ch == 2)
        {
            printf("Array after operation: ");
            for (i = 0; i < n; i++)
                printf("%d ", a[i]);
            printf("\n");
        }

    } while (ch != 3);

    return 0;
}