#include<stdio.h>
int main()
{
    int n,rev=10;
    scanf("%d",&n);
    for(int i=n;i>0;i/=10){
        int digit =i%10;
        if(digit>rev){
            printf("digit are not in ascending order");
            return 0;
        }
        rev=digit;
    }
    printf("Digit are in ascending order");
    return 0;
}
