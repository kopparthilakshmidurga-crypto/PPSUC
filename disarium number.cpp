#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,t,s=0,r=0,x;
    scanf("%d",&n);
    t=n;
    x=n;
    while (n!=0)
    {
        n=n/10;
        c++;
    }
    while (c!=0)
    {
        r=t%10;
        t=t/10;
        s=s+pow(r,c);
        c--;
    }
    if (s==x)
    {printf("True");}
    else
    {printf("False");}
}
