#include<stdio.h>
int main()
{
    int a,b;
    char s;
    scanf("%d %c %d", &a,&s,&b);
    if(s == '+')
    {
        if(a+b)
        {
            printf("%d", a+b);
        }
    }
    else if(s == '-')
    {
        if(a-b)
        {
            printf("%d", a-b);
        }
    }
    else if(s == '*')
    {
        if(a*b)
        {
            printf("%d", a*b);
        }
    }
    else if(s == '/')
    {
        if(b!=0)
        {
            printf("%d", a/b);
        }else
        {
            printf("Invalid");
        }
    }
}
