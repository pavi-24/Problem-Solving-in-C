#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(m<0){
        printf("you enter the negative power");
        return 0;
    }
    int res=1;
    for(int i=1;i<=m;i++){
        res*=n;
    }
    printf("%d",res);
    return 0;
}