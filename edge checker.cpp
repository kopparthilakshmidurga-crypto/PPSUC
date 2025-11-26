#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if((a == 1 && b == 2) ||
       (a == 2 && b == 3) ||
       (a == 3 && b == 4) ||
       (a == 4 && b == 5) ||
       (a == 1 && b == 10))
       {
        printf("Yes");
       }
       else 
       {
        printf("No");
       }
       return 0;
}
