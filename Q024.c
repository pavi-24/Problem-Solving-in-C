#include<stdio.h>
int main()
{
    int unit;
    float bill=0;
    scanf("%d",&unit);
    if(unit<=100){
        bill=0;
    }
    else if(unit<=300){
        bill=(unit-100)*5;
    }
    else{
        bill=(200*5)+(unit-300)*10;
    }
    if(unit>500){
        bill += bill*0.10;
    }
    printf("Total bill:%.2f\n",bill);
    return 0;
}