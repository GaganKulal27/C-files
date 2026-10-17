#include<stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int result;
    int num;
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);
    result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}