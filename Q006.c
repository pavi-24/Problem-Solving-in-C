#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==b && b==c && c==d && a==d){
        printf("forms a square\n");
    }
    else if(a==c && b==d){
        printf("forms a rectangle\n");
    }
    else{
        printf("the sides do not form both square and rectangle\n");
    }
    return 0;
}