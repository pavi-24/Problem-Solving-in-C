#include<stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    for(int i=n;i>0;i/=10){
        int last=i%10;
        rev=(rev*10)+last;
    }
    printf("%d",rev);
    return 0;
}