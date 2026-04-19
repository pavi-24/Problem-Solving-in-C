#include<stdio.h>
int main()
{
    int litre;
    float bill=0;
    scanf("%d",&litre);
    if(litre<=1000){
        bill=0;
    }
    else if(litre<=3000){
        bill = (litre-1000)*5/1000.0;
    }
    else{
        bill=(2000 *5)/1000.0 + (litre - 3000)*10/1000.0;
    }
    printf("Water bill:Rs.%.2f",bill);
    return 0;
}