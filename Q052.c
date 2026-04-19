#include<stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        int last=n%10;
        rev=10*rev+last;
        n/=10;
    }
    while(rev>0){
        int last=rev%10;
        switch(last){
            case 0:
              printf("Zero ");
              break;
            case 1:
              printf("One ");
              break;
            case 2:
              printf("Two ");
              break;
            case 3:
              printf("Three ");
              break;
            case 4:
              printf("Four ");
              break;
            case 5:
              printf("Five ");
              break;
            case 6:
              printf("Six ");
              break;
            case 7:
              printf("Seven ");
              break;
            case 8:
              printf("Eight ");
              break;
            case 9:
              printf("Nine ");
              break;
        }
        rev/=10;
    }
    return 0;
}