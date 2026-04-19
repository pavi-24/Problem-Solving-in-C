#include<stdio.h>
int main()
{
    int choice,balance=1000,amount;
    printf("1.Deposit\n2.Withdraw\n3.check Balance\n4.Exit\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
          printf("Enter amount to deposit: ");
          scanf("%d",&amount);
          balance += amount;
          printf("New balance:%d",balance);
          break;
        case 2:
          printf("Enter amount to withdraw: ");
          scanf("%d",&amount);
          if(amount>balance){
            printf("Insufficient balance!\n");
          }
          else{
          balance -= amount;
          printf("New balance:%d",balance);
          }
          break;
        case 3:
          printf("your balance:%d",balance);
          break;
        case 4:
          printf("Thank you for using ATM! Good Bye!\n");
          break;
        default:
          printf("Invaild choice! Try again.\n");
    }
    return 0;
}