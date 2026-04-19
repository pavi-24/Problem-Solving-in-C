#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%100==0){
        printf("%d is century year",year);
    }
    else{
        printf("%d is not century year",year);
    }
    return 0;
}