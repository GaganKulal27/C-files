#include<stdio.h>
int main(){
    for (int j = 0; j <5; j++)
    {
        if (j==2)
        {
            break;
        }
        else{
        printf("loop started\n");}
        for (int i = 0; i < 5; i++)
        {
            printf("Inner loop started\n");
            break;
            printf("from Inner loop\n");
        }
        
        printf("From outer loop\n");
        
    }
    printf("program teminated");
}