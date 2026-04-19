#include<stdio.h>
int main()
{
    printf("Uppercase letters in reverse order:\n");
    for(char i='Z';i>='A';i--){
        printf("%c ",i);
    }
    printf("\n");
    printf("Lowercase letters in reverse order:\n");
    for(char i='z';i>='a';i--){
        printf("%c ",i);
    }
    return 0;
}