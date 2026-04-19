#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int count1=0,count0=0;
    for(long long int i=n;i>0;i/=10){
        int last=i%10;
        if(last==0){
            count0++;
        }
        else if(last==1){
            count1++;
        }
    }
    printf("Number of 0s:%d\nNumber of 1s:%d",count0,count1);
    return 0;
}