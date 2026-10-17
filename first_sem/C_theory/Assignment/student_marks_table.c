
#include <stdio.h>

int roll[5], marks[5][5];
char name[5][30];

void input(void)
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("\nEnter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        for (j = 0; j < 5; j++)
        {
            do
            {
                printf("Enter Subject %d marks (0-100): ", j + 1);
                scanf("%d", &marks[i][j]);

                if (marks[i][j] < 0 || marks[i][j] > 100)
                    printf("Invalid marks! Try again.\n");
            } while (marks[i][j] < 0 || marks[i][j] > 100);
        }
    }
}

void result(void)
{
    int i, j, total, pass;
    float avg, percent;
    printf("\nStudent Results:\n");
    printf("+=====================================================+\n");
    printf("| Roll\tName\tTotal\tAverage\tPercent\tResult |\n");
    printf("+=====================================================+\n");

    for (i = 0; i < 5; i++)
    {
        total = 0;
        pass = 1;

        for (j = 0; j < 5; j++)
        {
            total += marks[i][j];

            if (marks[i][j] < 35)
                pass = 0;
        }

        avg = total / 5.0f;
        percent = (total / 500.0f) * 100;

        printf("| %d\t%s\t%d\t%.2f\t%.2f%%\t%s |\n",
               roll[i], name[i], total, avg, percent, pass ? "PASS" : "FAIL");
               printf("+-------------------------------------------------+\n");
    }
    printf("+=====================================================+\n");
}

int main(void)
{
    input();
    result();
    return 0;
}

