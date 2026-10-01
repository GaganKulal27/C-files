
#include<stdio.h>
int main(){
    int size=read_array_size();
        
            for (int j = 0; j < array_size; j++)
            {
                printf("Enter the %d subject marks: ",j+1);
                scanf("%d",&element[j]);
            } 
    
}

int element[];
int read_array_size(){
int array_size;
printf("En ter the size of array[size>4]:");
scanf("%d",&array_size);
return array_size;
}
void validate_array_size(int arraysize){
    if (arraysize>4)
    {

    }
    
}