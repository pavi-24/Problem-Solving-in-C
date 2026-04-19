#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d",&n);
    int temp=n;
    while(temp>9){
        sum=0;
        while(temp>0){
            sum+=temp%10;
            temp/=10;
        }
        temp=sum;
    }
    if(sum==1){
        printf("%d is a magic number",n);
    }
    else{
        printf("%d is not a magic number",n);
    }
    return 0;
}