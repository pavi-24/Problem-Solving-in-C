#include<stdio.h>
int main()
{
    char ch,ch1;
    scanf("%c %c",&ch,&ch1);
    for(char i=ch;i<=ch1;i++){
        printf("%c ",i);
    }
    return 0;
}