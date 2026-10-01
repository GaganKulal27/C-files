
#include<stdio.h>
int main(){
    int size=read_array_size();       //calling method & stored returned value
    int isvalid=validate_array_size(size);       //passing "arraysize"; int arraysize=size
    for (int i = 0; i < size ; i++)
    {
    
        if (isvalid==0)
        {
            printf("Array is not vaild:pls retry");
            validate_array_size(size);
        }
        else{
            return i--;   
        }
    }
}

int element[];
int read_array_size(){
int array_size;
printf("Enter the size of array[size>4]:");
scanf("%d",&array_size);
return array_size;
}
int validate_array_size(int arraysize){
    if (arraysize>4)
    {
        return 1;
    }
    else{
        return 0;
    }
}