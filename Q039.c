#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n>10){
        n = n/10;
    }
    if(n%2==0){
        printf("%d is even",n);
    }
    else{
        printf("%d is odd",n);
    }
    return 0;
}