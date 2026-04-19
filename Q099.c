#include<stdio.h>
int main()
{
    int n,num,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&num);
        if(num<0){
            continue;
        }
        sum+=num;
    }
    printf("%d",sum);
    return 0;
}