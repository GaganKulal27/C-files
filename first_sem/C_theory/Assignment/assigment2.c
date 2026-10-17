#include <stdio.h>

int main() {
    int rollNo;
    float marks1, marks2, marks3, marks4, marks5;
    float total, average, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter marks in five subjects:\n");

    printf("Subject 1: ");
    scanf("%f", &marks1);

    printf("Subject 2: ");
    scanf("%f", &marks2);

    printf("Subject 3: ");
    scanf("%f", &marks3);

    printf("Subject 4: ");
    scanf("%f", &marks4);

    printf("Subject 5: ");
    scanf("%f", &marks5);

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    average = total / 5;
    percentage = (total / 500) * 100;

    printf("\n====================================\n");
    printf("       STUDENT MARKS REPORT\n");
    printf("====================================\n");
    printf("Roll Number : %d\n", rollNo);
    printf("------------------------------------\n");
    printf("Subject 1   : %.2f\n", marks1);
    printf("Subject 2   : %.2f\n", marks2);
    printf("Subject 3   : %.2f\n", marks3);
    printf("Subject 4   : %.2f\n", marks4);
    printf("Subject 5   : %.2f\n", marks5);
    printf("------------------------------------\n");
    printf("Total Marks : %.2f / 500\n", total);
    printf("Average     : %.2f\n", average);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("====================================\n");

    return 0;
}
