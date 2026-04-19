#include<stdio.h>
int main()
{
    int day;
    scanf("%d",&day);
    switch(day){
        case 1:case 2:case 3:case 4:case 5:
           printf("It is weekdays\n");
           break;
        case 6:case 7:
           printf("It is weekend\n");
           break;
        default:
           printf("Invaid day number\n");
    }
    return 0;
}