#include<stdio.h>
int main(){
   int num,i=1,j;
    printf("Enter the no of time repeat: ");
    scanf("%d",&num);
    while (i <= num) {
        j = 1;
        while (j <= i) {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}