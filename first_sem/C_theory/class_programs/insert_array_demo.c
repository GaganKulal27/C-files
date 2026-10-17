#include<stdio.h>
int main(){
    int array[5];
    int newdata,index;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&array[i]);
        printf("Array elements are:%d\n",array[i]);
    }
    printf("Enter the new element: ");
    scanf("%d",&newdata);
    printf("Enter the new element idnex: ");
    scanf("%d",&index);
    for (int j = 4; index <=j ; j--)
    {
        if (index<j)
        {
        array[j]=array[j-1];
        }
        else{
            array[j]=newdata;
        }

    }

    for (int k = 0; k < 5; k++)
    {
        printf("%d element: %d\t",k+1,array[k]);
    }
    
    

}
    