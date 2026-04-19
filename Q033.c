#include<stdio.h>
int main()
{
    long long mobile;
    scanf("%lld",&mobile);
    if(mobile>=1000000000 && mobile<=9999999999){
        printf("Mobile number is vaid");
    }
    else{
        printf("Mobile number is invaid");
    }
    return 0;
}