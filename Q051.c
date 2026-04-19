#include<stdio.h>
int main()
{
    int n,square=0,cube=0;
    scanf("%d",&n);
    while(n>0){
        int digit=n%10;
        square+=digit*digit;
        cube+=digit*digit*digit;
        n/=10;
    }
    printf("Sum of squares of all digit:%d\n",square);
    printf("sum of cube of all digit:%d",cube);
    return 0;
}