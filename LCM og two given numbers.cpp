#include<stdio.h>
int main()
{
    int a,b,x,y,i=0;
    scanf("%d%d",&a,&b);
    while (i>=0)
    {
        i++;
        x=i%a;
        y=i%b;
        if (x==0&&y==0)
        {
            break;
        }
    }
    printf("%d",i);
}
