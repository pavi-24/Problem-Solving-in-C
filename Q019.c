#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    printf("%s",(age>=18)?"Eligible to vote":"not eligible to vote");
    return 0;
}