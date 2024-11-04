
#include<stdio.h>
int main()
{
    int a,b;
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    a=n%10;
    b=m%10;
    int sum= a+b;
    printf("%d",sum);
}
