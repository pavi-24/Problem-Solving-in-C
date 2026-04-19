#include<stdio.h>
int main()
{
    int choice;
    printf("Enter the traffic light: \n");
    printf("1.Red\n2.Yellow\n3.Green\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
          printf("STOP\n");
          break;
        case 2:
          printf("READY\n");
          break;
        case 3:
          printf("GO\n");
          break;
        default:
          printf("Invaid signal!\n");
    }
    return 0;
}