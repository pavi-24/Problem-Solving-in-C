#include<stdio.H>
int main()
{
    int charge;
    scanf("%d",&charge);
    if(charge==100){
        printf("battery full\n");
    }
    else if(charge==50){
        printf("50%% consumed\n");
    }
    else if(charge<=20){
        printf("low charge\n");
    }
    else{
        printf("battery status normal\n");
    }
    return 0;
}