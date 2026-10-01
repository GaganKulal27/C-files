/*#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (i = 1; i <=n; i++){
        for (j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("enter i value: ");
    scanf("%d",&m);
    for (i = m; i >=n; i--)
    {
        for (j = 1; j <= i; j=j+1)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}*/
#include <stdio.h>
int main(){
    int i, j;
    for (i = 6; i >= 1; i--){
        for (j = 1; j <= i; j++){
            if (i == 6 && j == 3){
                printf("  ");
            }
            else if (i == 4 && j == 2){
                printf("  ");
            }
            else{
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}
