#include<stdio.h>
int main()
{
    int n,p=1;
    scanf("%d",&n);
    long long int bin=0;
    for(int i=n;i>0;i/=2){
        int rem=i%2;
        bin=rem*p+bin;
        p*=10;  
    }
    printf("%lld",bin);
    return 0;
}