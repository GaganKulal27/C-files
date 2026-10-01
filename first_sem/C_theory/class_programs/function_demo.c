/*#include<stdio.h>
void add_to_number(int first,int second){ //function definition
int sum;
/*int first=100;
int second=200;*/
/*sum=first+second;
printf("The sum is: %d\n",sum);
}
int main(){
    add_to_number(10,20);
    add_to_number(200,100);
    printf("program terminated");
}/**/
#include <stdio.h>
int main() {
int day, steps;
int total = 0, goalAchievedCount = 0;
int bestDaySteps = 0, bestDayNumber = 0;
float average;
const int GOAL = 8000;
printf("Enter step count for 7 days:\n");
for (day = 1; day <= 7; day++) {
printf("Day %d: ", day);
scanf("%d", &steps);
// Accumulate total
total += steps;
// Check goal achievement
if (steps >= GOAL) {
goalAchievedCount++;
}
// Track the best day
if (steps > bestDaySteps) {
bestDaySteps = steps;
bestDayNumber = day;
}
}
average = total / 7.0;
// Display results
printf("\n--- Weekly Step Report ---\n");
printf("Total Steps : %d\n", total);
printf("Average Steps : %.2f\n", average);
printf("Goal Achieved Days: %d out of 7\n", goalAchievedCount);
printf("Best Day : Day %d with %d steps\n", bestDayNumber,
bestDaySteps);
return 0;
}