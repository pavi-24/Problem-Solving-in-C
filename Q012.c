#include<stdio.h>
int main()
{
    int year,month,days;
    scanf("%d%d",&year,&month);
    if(month<1 && month>12){
        printf("invaid month");
    }
    else{
        switch(month){
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                 days=31;
                 break;
            case 4:case 6:case 9:case 11:
                 days=30;
                 break;
            case 2:
            if((year%400==0)||(year%4==0 && year%100!=0)){
                days=29;
            }
            else{
                days=28;
            }
        }
    }
    printf("%d year,%d month has %d days",year,month,days);
    return  0;
}