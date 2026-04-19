#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    for(int i=0;i<=9;i++){
        int count=0;
        temp=n;
        while(temp>0){
            int last=temp%10;
            if(last==i){
                count++;
            }
            temp=temp/10;
        }
        if(count>0){
            printf("%d is occurs %d times\n",i,count);
        }
    }
    return 0;
}