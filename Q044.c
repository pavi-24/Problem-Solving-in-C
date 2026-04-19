#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int last=temp%10;
    int first,count=0;
    while(temp>0){
        first=temp%10;
        temp=temp/10;
        count++;
    }
    temp=n;
    int pow=1;
    for(int i=1;i<count;i++){
        pow=pow*10;
    }
    int mid=(temp%pow)/10;
    int num=last*pow + mid*10 + first;
    printf("Swapped number:%d",num);
    return 0;
}