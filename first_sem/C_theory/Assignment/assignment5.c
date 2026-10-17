#include <stdio.h>

int main()
{
    int nationality, age, test, fee;

    printf("Are you Indian? (1-Yes, 0-No): ");
    scanf("%d", &nationality);

    if (nationality == 0)
        printf("Not eligible: Nationality is not Indian.");

    else
    {
        printf("Enter age: ");
        scanf("%d", &age);

        if (age < 18)
            printf("Not eligible: Age is below 18.");

        else
        {
            printf("Passed driving test? (1-Yes, 0-No): ");
            scanf("%d", &test);

            if (test == 0)
                printf("Not eligible: Driving test not passed.");

            else
            {
                printf("Paid DL fee? (1-Yes, 0-No): ");
                scanf("%d", &fee);

                if (fee == 0)
                    printf("Not eligible: DL fee not paid.");
                else
                    printf("Eligible for driving licence.");
            }
        }
    }

    return 0;
}
