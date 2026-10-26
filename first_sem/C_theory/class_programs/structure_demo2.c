#include <stdio.h>
// Structure definition for student
struct student {
    // structure members
        int id;
        char name[50];      //name
        char contact[10];   //contact
        int pin;            //pin
    };
int main(){
    int count;
    printf("Enter the number of students: ");
    scanf("%d", &count);
    struct student students[count];
    for (int i = 0; i < count; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Contact: ");
        scanf("%s", students[i].contact);
        printf("PIN: ");
        scanf("%d", &students[i].pin);
    }
    for (int i = 0; i < count; i++)
    {
        printf("------------------------------\n");
        printf("Student %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Contact: %s\n", students[i].contact);
        printf("PIN: %d\n", students[i].pin);
    }
}