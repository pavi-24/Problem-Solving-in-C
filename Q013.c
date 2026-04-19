#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d\n",&a,&b);
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case '+':
          printf("Sum:%d",a+b);
          break;
        case '-':
          printf("Difference:%d",a-b);
          break;
        case '*':
          printf("product:%d",a*b);
          break;
        case '/':
          printf("division:%d",a/b);
          break;
        default:
          printf("Invaid operator!");
    }
    return 0;
}