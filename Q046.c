#include<stdio.h>
int main()
{
    int n,largest=0;
    scanf("%d",&n);
    int last=n%10;
    while(n>0){
       int last=n%10;
       if(largest<last){
        largest=last;
       }  
       n/=10;
    }
    printf("Largest digit:%d",largest);
    return 0;
}