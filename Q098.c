#include<stdio.h>
int main()
{
    int n,sum=0;
    while(1){
        scanf("%d",&n);
        if(n<0){
            break;
        }
        else{
            sum+=n;
        }
    }
    printf("%d",sum);
    return 0;
}