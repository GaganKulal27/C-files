// #include<stdio.h>
// int main(){
//     char name[30];
//     printf("Enter the name:");
//     scanf("%s",&name);
//     printf("Name:%s",name);
// }
// #include<stdio.h>
// int main(){
//     char name[30];
//     printf("Enter the name:");
//     fgets(name,sizeof(name),stdin);
//     printf("Name:%10s",name);
// }
#include<stdio.h>
int main(){
    char word[]="Program";
    for (int i = 0; word[i] !='\0'; i++)
    {
        printf("word[%d]=3%c\t",i+1,word[i]);
    }
    
}