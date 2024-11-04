#include <stdio.h>
int main()
{
    unsigned long long A,B,C,D;
    scanf("%llu %llu %llu %llu", &A,&B,&C,&D);
    A %= 100;
    B %= 100;
    C %= 100;
    D %= 100;
    unsigned long long result = (A*B*C*D) % 100;
    printf("%02llu\n",result);
}
