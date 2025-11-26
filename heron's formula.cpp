#include<math.h>
#include<stdio.h>
int main()
{
    int a,b,c;
    double s,x;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    x=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.4lf",x);
    return 0;
}
