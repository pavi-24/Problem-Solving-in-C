#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int num1=a,num2=b;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    printf("LCM of %d and %d is %d\n",num1,num2,(num1*num2)/a);
    return 0;
}