#include<stdio.h>
int main()
{
    int a,b,c,d,t=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a<b)
    {t=t+1;}
    if (a<c)
    {t=t+1;}
    if (a<d)
    {t=t+1;}
    printf("%d",t);
}
