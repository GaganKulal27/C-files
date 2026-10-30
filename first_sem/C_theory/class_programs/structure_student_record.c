// input 5 student record and individual student record 3 subject marks and calculate total marks and percentage
#include<stdio.h>
struct student_record{
    int id;
    char name[10];
    int marks[3];
    int total;              //to store total marks
    float percentage;       //to store percentage
};
// int main()
// {
//     struct student_record students[5];
//     for(int i=0; i<5; i++){
//         printf("Enter details for student %d:\n", i+1);
//         printf("Student ID: ");
//         scanf("%d", &students[i].id);
//         printf("Student Name: ");
//         scanf("%s", students[i].name);
//         students[i].total = 0;
//         for(int j=0; j<3; j++)
//         {
//             printf("Enter marks for subject %d: ", j+1);
//             scanf("%d", &students[i].marks[j]);
//             students[i].total += students[i].marks[j];
//         }
//         students[i].percentage = (float)students[i].total / 300 * 100;
//     }
//     for(int i=0; i<5; i++){
//         printf("------------------------------\n");
//         printf("Student %d:\n", i+1);
//         printf("Student ID: %d\n", students[i].id);
//         printf("Student Name: %s\n", students[i].name);
//         printf("Total Marks: %d\n", students[i].total);
//         printf("Percentage: %.2f%%\n", students[i].percentage);
//     }
//     return 0;
// }
void read_student_data()
{
    struct student_record students[5];
    for(int i=0; i<5; i++){
        printf("Enter details for student %d:\n", i+1);
        printf("Student ID: ");
        scanf("%d", &students[i].id);
        printf("Student Name: ");
        scanf("%s", students[i].name);
        for(int j=0; j<3; j++){
            printf("Enter marks for subject %d: ", j+1);
            scanf("%d", &students[i].marks[j]);
        }
    }
}

int Calculate_Total(){
    struct student_record students[5];
    for(int i=0; i<5; i++){
        students[i].total = 0;
        for(int j=0; j<3; j++){
            students[i].total += students[i].marks[j];
        }
    }
    return 0;
}

float Calculate_Percentage(){
    struct student_record students[5];
    for(int i=0; i<5; i++){
        students[i].percentage = (float)students[i].total / 300 * 100;
    }
    return 0;
}
void display_student_data()
{
    struct student_record students[5];
    for(int i=0; i<5; i++){
        printf("------------------------------\n");
        printf("Student %d:\n", i+1);
        printf("Student ID: %d\n", students[i].id);
        printf("Student Name: %s\n", students[i].name);
        printf("Total Marks: %d\n", students[i].total);
        printf("Percentage: %.2f%%\n", students[i].percentage);
    }
}
int main(){
    struct student_record students[5];
    read_student_data();
    Calculate_Total();
    Calculate_Percentage();
    display_student_data();
    return 0;
}



