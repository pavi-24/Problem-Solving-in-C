#include<stdio.H>
int main()
{
    float amount,dis=0;
    scanf("%f",&amount);
    if(amount>=5000){
        dis=amount*0.50;
    }
    else if(amount>=3000){
        dis=amount*0.30;
    }
    else if(amount>=1000){
        dis=amount*0.10;
    }
    else{
        dis=amount*0.05;
    }
    printf("Original Amount:%.2f\n",amount);
    printf("Discount Amount:%.2f\n",dis);
    printf("Final Amount:%.2f",amount-dis);
    return 0;
}