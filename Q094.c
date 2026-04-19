#include<stdio.h>
int main()
{
    int n,even=0,odd=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even+=i;
        }
        else{
            odd+=i;
        }
    }
    printf("sum of even numbers:%d\nsum of odd number:%d",even,odd);
    return 0;
}