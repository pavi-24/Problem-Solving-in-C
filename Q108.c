#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num=i;
        while(num%2==0){
            num=num/2;
        }
        if(num==1){
            printf("%d ",i);
        }
    }
    return 0;
}