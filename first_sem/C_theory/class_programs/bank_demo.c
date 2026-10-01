#include<stdio.h>
int main(){
    int accountno=1000;          //1,2,3,4,5,6,7
    int useraccountno;
    float balance=500;
    int withdraw,deposit;
    int option;
    while (option!=4)
    {
    
    printf("--------welcome to my bank---------\n");
    printf("1.deposit\n");
    printf("2.withdraw\n");
    printf("3.account view\n");
    printf("4.exit\n");
    printf("enter your option:");
    scanf("%d",&option);
        switch (option){
            case 1:
            printf("ur account no is:");
            scanf("%d",&useraccountno);
            if (accountno==useraccountno){
                printf("valid account\n");
                printf("enter amount to deposit:");
                scanf("%d",&deposit);
                balance=balance+deposit;
                printf("account updated...");
                printf("balance %f\n",balance);
                printf("thank you for banking with us\n");
            }
            else{
                printf("invalid option");
            }
            break;
            case 2:
            printf("ur account no is:");
            scanf("%d",&useraccountno);
            if (accountno==useraccountno){
                printf("valid account\n");
                printf("enter amount to withdraw:");
                scanf("%d",&withdraw);
                if (withdraw<=balance){
                    printf("withdraw successfull\n");
                    balance=balance-withdraw;
                    printf("account updated...\n");
                    printf("balance %f\n",balance);
                    printf("\'thank you for banking with us🙏🏻'\n");
                }
                else{
                    printf("insufficient balance\n");
                }}
            else{
                printf("invalid option");
            }
            break;
            case 3:
            printf("ur account no is:");
            scanf("%d",&useraccountno);
            if (accountno==useraccountno){
                printf("valid account\n");
            }
            else{
                printf("invalid option");
            }
            printf("ur balance is: %f\n", balance);
            
            break;
            case 4:
            printf("exit");
            break;
            default:
            printf("invalid option");
        }
    return 0;
    }
}