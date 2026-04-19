#include<stdio.h>
int main()
{
    int day;
    scanf("%d",&day);
    switch(day){
        case 1:case 2:case 3:case 4:case 5:
           printf("Ticket price: Rs.100\n");
           break;
        case 6:case 7:
           printf("Ticket price: Rs.150\n");
           break;
        default:
          printf("Invaild day!");
    }
    return 0;
}