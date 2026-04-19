#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    int temp=num;
    while(temp!=0){
        int last=temp%10;
        int fact=1;
        for(int i=1;i<=last;i++){
            fact*=i;
        }
        sum+=fact;
        temp/=10;
    }
    if(sum==num){
        printf("%d is a strong number",num);
    }
    else{
        printf("%d is not a strong number",num);
    }
    return 0;
}