#include<stdio.h>
int main()
{
    int n,odd=0,even=0;
    scanf("%d",&n);
    while(n>0){
        int last=n%10;
        if(last%2==0){
            even++;
        }
        else{
            odd++;
        }
        n/=10;
    }
    if(even>0 && odd==0){
        printf("All digit are even");
    }
    else if(odd>0 && even==0){
        printf("All digit are odd");
    }
    else{
        printf("digit are mixed");
    }
    return 0;
}