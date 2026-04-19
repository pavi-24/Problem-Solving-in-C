#include<stdio.h>
int main()
{
    int balance=5000,withdraw;
    scanf("%d",&withdraw);
    if(balance<withdraw){
        printf("Insufficient balance!\n");
    }
    else if(withdraw%100!=0){
        printf("Withdraw amount must be multiple of 100!\n");
    }
    else{
        balance -= withdraw;
        printf("withdraw success fully!\n");
        printf("New balance:%d",balance);
    }
    return 0;
}