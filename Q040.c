#include<stdio.h>
int main()
{
    int n,digit;
    scanf("%d%d",&n,&digit);
    while(n>0){
        if(n%10==digit){
            printf("%d is present in the number",digit);
            return 0;
        }
        n=n/10;
    }
    printf("%d is not present in the number",digit);
    return 0;
}