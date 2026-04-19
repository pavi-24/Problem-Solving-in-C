#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0 && b>0 && c>0 && (a+b+c==180)){
        printf("the angle form a triangle\n");
    }
    else{
        printf("The angle do not from a triangle\n");
    }
    return 0;
}