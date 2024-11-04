#include<stdio.h>
#include<math.h>
int main()
{

    double n;
    int m;
    int x;
    scanf("%lf",&n);
    m = (int)n;
    x = n-m;
    if(x == 0)
    {
        printf("int = %d\n",m);
    }else
    {
        x = fabs(x);
        printf("float = %d %.6f",m,x);
    }


