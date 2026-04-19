#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%7==0 || n%10==7){
        printf("%d is a Buzz number",n);
    }
    else{
        printf("%d is not a Buzz number",n);
    }
    return 0;
}