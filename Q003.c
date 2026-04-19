#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>0 && y>0){
        printf("first quadrant\n");
    }
    else if(x<0 && y>0){
        printf("second quadrant\n");        
    }
    else if(x<0 && y<0){
        printf("third quadrant\n");
    }
    else if(x>0 && y<0){
        printf("fourth quadrant\n");
    }
    else{
        printf("origin\n");
    }
    return 0;
}