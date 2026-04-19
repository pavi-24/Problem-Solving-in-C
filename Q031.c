#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age<12){
        printf("Child ticket - Rs.100");
    }
    else if(age>=60){
        printf("Senior ticket - Rs.150");
    }
    else{
        printf("Adult ticket - Rs.200");
    }
    return 0;
}