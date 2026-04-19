#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int temp=i,sum=0,count=0;
        while(temp!=0){
            int last=temp%10;
            count++;
            temp/=10;
        }
        temp=i;
        while(temp!=0){
            int last=temp%10;
            sum+=pow(last,count);
            temp/=10;
        }
        if(sum==i){
            printf("%d ",i);
        }
    }
    return 0;
}