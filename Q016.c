#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    switch(m){
        case 3:case 4:case 5:
          printf("Summer season\n");
          break;
        case 6:case 7:case 8:
          printf("Rainy season\n");
          break;
        case 9:case 10:case 11:
          printf("Spring season\n");
          break;
        case 12:case 1:case 2:
          printf("Winter season\n");
          break;
        default:
          printf("Invaid month number\n");
    }
    return 0;
}