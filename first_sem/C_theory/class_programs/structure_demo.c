
#include <stdio.h>
// Structure definition for student
struct student {
    // structure members
        int id;
        char name[50];      //name
        char contact[10];   //contact
        int pin;            //pin
    };
int main() {
    struct student student1;    //creating structure variable "student1" of type "student"
    struct student student2;    //creating structure variable "student2" of type "student"
    student2.id=1;                //assigning value to structure member "id" of structure variable "student2"
    student2.name[50]="shiven";   //assigning value to structure member "name" of structure variable "student2"
    student2.contact[10]="7894651320"; //assigning value to structure member "contact" of structure variable "student2"
    student2.pin=8794;           //assigning value to structure member "pin" of structure variable "student2"
    printf("Enter the the id:");
    scanf("%d",&student1.id);
    printf("Enter the name:");
    scanf("%s",student1.name);
    printf("Enter the contact:");
    scanf("%s",student1.contact);
    printf("Enter the pin:");
    scanf("%d",&student1.pin);
    printf("------------------------------\n");
    printf("Student 1:\n");
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Contact: %s\n", student1.contact);
    printf("PIN: %d\n", student1.pin);
    printf("------------------------------\n");
    printf("Student 2:\n");
    printf("ID: %d\n", student2.id);
    printf("Name: %s\n", student2.name);
    printf("Contact: %s\n", student2.contact);
    printf("PIN: %d\n", student2.pin);
}