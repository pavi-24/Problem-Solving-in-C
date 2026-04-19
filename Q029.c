#include<stdio.h>
int main()
{
    int temp;
    scanf("%d",&temp);
    if(temp<15){
        printf("COLD");
    }
    else if(temp>15 && temp<=25){
        printf("PLEASANT");
    }
    else if(temp>25 && temp<=35){
        printf("HOT");
    }
    else{
        printf("HEATWAVE");
    }
    return 0;
}