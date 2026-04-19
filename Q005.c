#include<stdio.H>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("the sides from a triangle\n");
    }
    else{
        printf("the sides do not from a triangle\n");
    }
    return 0;
}