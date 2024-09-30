#include<stdio.h>
int main ()
{
    int m,k,v;
    scanf("%d",&m);
    scanf("%d",&k);
    v=m;
    m=k;
    k=v;
    printf("m=%d",m);
    printf("k=%d",k);
    return 0 ;
}
