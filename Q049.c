#include<stdio.h>
int main()
{
    int n,odd=0,even=0;
    scanf("%d",&n);
    while(n>0){
        int last=n%10;
        if(last%2==0){
            even+=last;
        }
        else{
            odd+=last;
        }
        n/=10;
    }
    printf("%d",even-odd);
    return 0;
}