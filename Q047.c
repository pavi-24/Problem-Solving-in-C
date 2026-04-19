#include<stdio.h>
int main()
{
    int n,min=9;
    scanf("%d",&n);
    while(n>0){
        int last=n%10;
        if(last<min){
            min=last;
        }
        n/=10;
    }
    printf("small digit:%d",min);
    return 0;
}