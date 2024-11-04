#include <stdio.h>
int main()
{
    long long N;
    scanf("%lld", &N);
    long long result = (N * (N + 1)) / 2;
    printf("%lld\n", result);

    return 0;
}
