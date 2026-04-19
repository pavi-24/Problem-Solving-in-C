#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;count<n;i++){
         int num=0;
         for(int j=1;j<=i;j++){
            if(i%j==0){
                num++;
            }
         }
         if(num==2){
            printf("%d ",i);
            count++;
         }
    }
    return 0;
}