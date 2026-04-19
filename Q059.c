#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n,sum=0,count=0;
    while(temp!=0){
        int last=temp%10;
        count++;
        temp/=10;
    }
    temp=n;
    while(temp!=0){
        int last=temp%10;
        sum+=pow(last,count);
        temp/=10;
    }
    if(sum==n){
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }
    return 0;
}