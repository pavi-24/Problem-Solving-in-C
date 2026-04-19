#include<stdio.h>
int main()
{
    int n,product=1;
    scanf("%d",&n);
    while(n>0){
        int last=n%10;
        product*=last;
        n/=10;
    }
    printf("%d",product);
    return 0;
}