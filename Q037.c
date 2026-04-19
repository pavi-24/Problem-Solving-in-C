#include<stdio.h>
int main()
{
    int tot_day,pres_days;
    scanf("%d%d",&tot_day,&pres_days);
    float per=(pres_days*100.0)/tot_day;
    printf("Attendance percentage: %.2f%%\n",per);
    if(per<75){
        printf("Not eligible for exam\n");
    }
    else{
        printf("Eligible for exam\n");
    }
    return 0;
}