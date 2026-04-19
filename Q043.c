#include<stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    for(int i=n;i>0;i/=10){
        int digit = i%10;
        if(digit<rev){
            printf("Digits are not in descending order");
            return 0;
        }
        rev=digit;
    }
    printf("Digits are in descending order");
    return 0;
}