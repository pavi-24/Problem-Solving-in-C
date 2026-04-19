#include<stdio.h>
int main()
{
    int n,num=0,digit=1;
    scanf("%d",&n);
    while(n>0){
        int last=n%10;
        if(last!=0){
            num=last*digit+num;
            digit*=10;
        }
        n/=10;
    }
    printf("%d",num);
    return 0;
}