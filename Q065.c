#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sq=(int)sqrt(n);
    if(sq*sq==n){
        printf("%d is a perfect square number",n);
    }
    else{
        printf("%d is not a perfect square number",n);
    }
    return 0;
}