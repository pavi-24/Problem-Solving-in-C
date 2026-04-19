#include<stdio.h>
int main()
{
    printf("Vowels:\n");
    for(char i='A';i<='Z';i++){
        if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U'){
            printf("%c ",i);
        }
    }
    printf("\nConsonants:\n");
    for(char i='A';i<='Z';i++){
        if(i!='A'&&i!='E' && i!='I' && i!='O' && i!='U'){
            printf("%c ",i);
        }
    }
    return 0;
}