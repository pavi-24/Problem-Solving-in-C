#include<stdio.h>
int main()
{
    int battery;
    scanf("%d",&battery);
    if(battery>=80 && battery<=100){
        printf("full charge");
    }
    else if(battery>=30 && battery<80){
        printf("Moderate");
    }
    else{
        printf("Low");
    }
    return 0;
}