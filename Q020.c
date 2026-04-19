#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>=60){
        printf("Eigible for senior citizen benefits\n");
    }
    else{
        printf("Not eligible for senior citizen benefits\n");
    }
    return 0;
}