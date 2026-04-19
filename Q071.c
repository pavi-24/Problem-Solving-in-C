#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int sq=n*n;
    int temp=n;
    while(temp!=0){
        count++;
        temp/=10;
    }
    int pow=1;
    for(int i=0;i<count;i++){
        pow*=10;
    }
    if(sq%pow==n){
        printf("%d is the Automorphic number",n);
    }
    else{
        printf("%d is not a Automorphic number",n);
    }
    return 0;
}