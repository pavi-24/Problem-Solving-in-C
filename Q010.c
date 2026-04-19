#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year/100 == year%100){
        printf("first and last two digit of year is equal");
    }
    else{
        printf("first and last two digit of year is not equal");
    }
    return 0;
}