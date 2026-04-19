#include<stdio.h>
int main()
{
    long long int bin;
    scanf("%lld",&bin);
    int n=0,base=1;
    for(int i=bin;i>0;i/=10){
        int last=i%10;
        n+=last*base;
        base*=2;   
    }
    printf("%d",n);
    return 0;
}