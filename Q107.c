#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num=i;
        while(num>9){
            sum=0;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            num=sum;
        }
        if(sum==1){
            printf("%d ",i);
        }
    }
    return 0;
}