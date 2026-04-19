#include<stdio.h>
int main()
{
    int year1,year2;
    scanf("%d%d",&year1,&year2);
    if(year1%10 == year2%10){
        printf("both year have the same last digit");
    }
    else{
        printf("both year have not the same last digit");
    }
    return 0;
}