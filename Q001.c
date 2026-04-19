#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c && a==c){
            printf("Equilateral triangle\n");
        }
        else if(a==b || b==c || a==c){
            printf("Isosceles triangle\n");
        }
        else{
            printf("Scalence triangle\n");
        }
    }
    else{
        printf("Not a triangle\n");
    }
    return 0;
}