#include <stdio.h>
int rollNumber;
float marks1, marks2, marks3, marks4, marks5;
float total, average, cgpa;
int getstudentdata(){
// Input roll number and marks
printf("Enter Roll Number: ");
scanf("%d", &rollNumber);
printf("Enter marks in 5 subjects:\n");
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
return rollNumber;
}
int getTotal(){
// Calculate total and average
total = marks1 + marks2 + marks3 + marks4 + marks5;
return total;
}
float getAverage(){
average = total / 5;
return average;
}
float getCGPA(){
// Convert average to CGPA
cgpa = average / 9.5;
return cgpa;
}
/*void displayStudentDetails(){
// Display results
printf("\n--- Student CGPA Report ---\n");
printf("Roll Number : %d\n", rollNumber);
printf("Total Marks : %.2f\n", total);
printf("Average : %.2f\n", average);
printf("CGPA : %.2f\n", cgpa);
}*/
int main() {
    int rollnumber=getstudentdata();
    float total=getTotal();
    float average=getAverage();
    float cgpa=getCGPA();
    //displayStudentDetails();
    printf("\n--- Student CGPA Report ---\n");
    printf("Roll Number : %d\n", rollNumber);
    printf("Total Marks : %.2f\n", total);
    printf("Average : %.2f\n", average);
    printf("CGPA : %.2f\n", cgpa);
}