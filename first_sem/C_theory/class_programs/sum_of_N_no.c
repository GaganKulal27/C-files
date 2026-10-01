#include <stdio.h>
int main() {
    int number,sum=0;
    printf("Enter the n value: ");
    scanf("%d",&number);
    if (number>5){
        for (int i=5; i<=number;i=i+1){
            sum=sum+i;
            //printf("sum of number from 5 to %d is %d\n",number,sum);
        }
        printf("sum of number from 5 to %d is %d\n",number,sum);
    }
    else{
        printf("please enter no greater than 5");
    }
}
/*#include <stdio.h>
 
int main()
{
    int i, j,n;\
    printf("Enter the number: ");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
