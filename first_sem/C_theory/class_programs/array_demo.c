// program to store and display 5 subject marks
#include<stdio.h>
int main(){
    int sub_marks[5],larg=0,i=0;   //declares an array "sub_marks"
    //with size 5 of int type
    // storing /array intialisation - arrayname{index}=data/value;
    sub_marks[0]=80;  //stores the value in array postion whose index is "0"
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;
    printf("first subject marks: %d\n",sub_marks[0]);
    printf("second subject marks: %d\n",sub_marks[1]);
    printf("third subject marks: %d\n",sub_marks[2]);
    printf("fourth subject marks: %d\n",sub_marks[3]);
    printf("fifth subject marks: %d\n",sub_marks[4]);
    // dynamic intialisation of "sub_marks"
    /*printf("Enter the first subject marks:[int data]");
    scanf("%d",&sub_marks[0]);
    printf("Enter the second subject marks:[int data]");
    scanf("%d",&sub_marks[1]);
    printf("Enter the third subject marks:[int data]");
    scanf("%d",&sub_marks[2]);
    printf("Enter the fourth subject marks:[int data]");
    scanf("%d",&sub_marks[3]);
    printf("Enter the fifth subject marks:[int data]");
    scanf("%d",&sub_marks[4]);*/
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d subject marks: ",i+1);
        scanf("%d",&sub_marks[i]);
        if (sub_marks[i-1]>sub_marks[i]){
            larg=sub_marks[i-1];
        }
        else{
            larg=sub_marks[i];
        }
    }
    printf("--------------------------------------------\n");
    printf("--------------------------------------------\n");
    for (int j = 0; j < 5; j++)
    {
       //printf("%d subject marks: %d\n",j+1,sub_marks[j]); 
       
    }
    printf("subject marks: %d\n",larg);
    /*printf("first subject marks: %d\n",sub_marks[0]);
    printf("second subject marks: %d\n",sub_marks[1]);
    printf("third subject marks: %d\n",sub_marks[2]);
    printf("fourth subject marks: %d\n",sub_marks[3]);
    printf("fifth subject marks: %d\n",sub_marks[4]);*/
}