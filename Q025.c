#include<stdio.h>
int main()
{
    int enter_pin,pin=6789;
    scanf("%d",&enter_pin);
    if(enter_pin==pin){
        printf("Accesss Granted\n");
    }
    else{
        printf("Invid pin! access denied\n");
    }
    return 0;
}