#include<stdio.h>
int main()
{
    float bill,discount;
    scanf("%f",&bill);
    if(bill>=5000){
        discount=bill*0.20;
    }
    else if(bill>=1000){
        discount=bill*0.10;
    }
    else{
        discount=bill*0.05;
    }
    printf("Original bill:%.2f\n",bill);
    printf("discount amount:%.2f\n",discount);
    printf("Final amount :%.2f\n",bill-discount);
    return 0;
}