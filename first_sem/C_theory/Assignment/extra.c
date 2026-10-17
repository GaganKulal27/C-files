#include <stdio.h>

#define STUDENT_COUNT 5
#define SUBJECT_COUNT 5
#define NAME_LENGTH 50

typedef struct {
	int rollNumber;
	char name[NAME_LENGTH];
	int marks[SUBJECT_COUNT];
	int total;
	double average;
	double percentage;
	int passed;
} Student;

 void readStudent(Student *student, int number)
 {
 	int subject;

 	printf("\nStudent %d\n", number);
	printf("Roll number: ");
	scanf("%d", &student->rollNumber);
	printf("Name (one word): ");
	scanf("%49s", student->name);

    for (subject = 0; subject < SUBJECT_COUNT; subject++) {
 		printf("Marks in subject %d (0-100): ", subject + 1);
 		scanf("%d", &student->marks[subject]);
	}
 }

 void calculateResult(Student *student)
 {
 	int subject;

 	student->total = 0;
 	student->passed = 1;
 	for (subject = 0; subject < SUBJECT_COUNT; subject++) {
 		student->total += student->marks[subject];
 		if (student->marks[subject] < 35) {
 			student->passed = 0;
 		}
 	}

 	student->average = (double)student->total / SUBJECT_COUNT;
 	student->percentage = (double)student->total / (SUBJECT_COUNT * 100) * 100.0;
 }

 void printHeader(void)
 {
 	int subject;

 	printf("\n%-8s %-16s", "Roll No", "Name");
 	for (subject = 0; subject < SUBJECT_COUNT; subject++) {
 		printf(" %5s%d", "Sub", subject + 1);
 	}
 	printf(" %6s %8s %11s %6s\n", "Total", "Average", "Percent", "Result");
     printf("==============================================================");
    }

 void printStudent(const Student *student)
 {
 	int subject;    
 	printf("%-8d %-16s", student->rollNumber, student->name);
 	for (subject = 0; subject < SUBJECT_COUNT; subject++) {
 		printf(" %5d", student->marks[subject]);
 	}
 	printf(" %6d %8.2f %10.2f%% %6s\n",
 		   student->total, student->average, student->percentage,
 		   student->passed ? "PASS" : "FAIL");
 }

 int main(void)
 {
 	Student students[STUDENT_COUNT];
 	int student;

 	for (student = 0; student < STUDENT_COUNT; student++) {
 		readStudent(&students[student], student + 1);
 		calculateResult(&students[student]);
 	}

 	printHeader();
 	for (student = 0; student < STUDENT_COUNT; student++) {
 		printStudent(&students[student]);
 	}
 	return 0;
 }
