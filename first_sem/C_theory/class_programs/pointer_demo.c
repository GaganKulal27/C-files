#include<stdio.h>
int main(){
int x=10;          // Declare an integer variable x and initialize it to 10
int*p=&x;          // Declare a pointer variable p and assign it the address of x
printf("%d\n",x);  // Print the value of x
printf("%p\n",&x);  // Print the address of x
printf("%p\n",p);  // Print the value of p (which is the address of x)
}