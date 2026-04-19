#include<stdio.h>
int main()
{
    int n,multi,res=0;
    scanf("%d%d",&n,&multi);
    int  pro=(multi>0)?multi:-1*multi;
    for(int i=0;i<pro;i++){
        res+=n;
    }
    int sign;
    if((n>multi && multi<n)||(n<multi && n>multi)){
        sign=-1;
    }
    else{
        sign=1;
    }
    res=res*sign;
    printf("%d",res);
    return 0;
}