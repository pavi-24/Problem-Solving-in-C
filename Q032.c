#include<stdio.h>
int main()
{
    int speed;
    scanf("%d",&speed);
    if(speed>100){
        printf("over-speed");
    }
    else{
        printf("speed is within limit");
    }
    return 0;
}