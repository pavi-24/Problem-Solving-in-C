#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int sq=n*n;
    int temp=sq;
    while(temp!=0){
        sum+=temp%10;
        temp/=10;
    }
    if(sum==n){
        printf("%d is a Neon number",n);
    }
    else{
        printf("%d is not a Neon number",n);
    }
    return 0;
}