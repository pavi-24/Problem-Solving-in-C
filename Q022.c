#include<stdio.h>
int main()
{
    float temp;
    scanf("%f",&temp);
    if(temp>=100.0){
        printf("Fever\n");
    }
    else{
        printf("normal temperture\n");
    }
    return 0;
}