#include <stdio.h>
int main()
{
    int n,x,y,z,w;
    scanf("%d",&n);
    x=n/365;
    y=n%365;
    z=y/30;
    w=y%30;
    printf("%d years\n",x);
    printf("%d months\n",z);
    printf("%d days\n",w);
}
