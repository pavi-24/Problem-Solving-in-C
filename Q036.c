#include<stdio.h>
int main()
{
    int data,used;
    scanf("%d%d",&data,&used);
    int per=(used*100)/data;
    if(per>=100){
        printf("Data Over");
    }
    else if(per>=50){
        printf("Half  data consumed");
    }
    else{
        printf("low data usage");
    }
    return 0;
}