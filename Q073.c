#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    if(n<=0){
        printf("%d is not a power of 2",n);
        return 0;
    }
    while(temp%2==0){
        temp=temp/2;
    }
    if(temp==1){
        printf("%d ia a power of 2",n);
    }
    else{
        printf("%d is not a power of 2",n);
    }
    return 0;
}