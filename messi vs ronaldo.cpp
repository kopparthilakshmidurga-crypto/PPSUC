#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    int p,q;
    p=2*a+b;
    q=2*x+y;
    if(p==q)
    {printf("Equal");}
    else if(p>q)
    {printf("Messi");}
    else if(p<q)
    {printf("Ronaldo");}
}
