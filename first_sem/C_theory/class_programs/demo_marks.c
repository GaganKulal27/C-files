#include <stdio.h>
int main() {
    int mymark,n,num,python,dbms,cprogram;
    printf("Enter the no of student: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the student %d marks:\n",i);
        //scanf("%d",&num);
        printf("Enter the python marks:");
        scanf("%d",&python);
        printf("Enter the dbms marks:");
        scanf("%d",&dbms);
        printf("Enter the cprogram marks:");
        scanf("%d",&cprogram);
        printf("\n");
    }
    printf("==========================================\n");
    
}