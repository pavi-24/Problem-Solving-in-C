#include<stdio.h>
int main()
{
    int n,d,count=0;
    scanf("%d%d",&n,&d);
    while(n>0){
        if(n%10==d){
            count++;
        }
        n=n/10;
    }
    printf("%d occur %d times in the number ",d,count);
    return 0;
}