#include<stdio.h>
int main()
{
    int n,m,s,c=0;
    scanf("%d%d",&n,&m);
    s=n*m;
    while (s!=0)
    {
        s=s/10;
        c++;
    }
    if (c==5)
    {printf("YES");}
    else
    {printf("NO");}
}
