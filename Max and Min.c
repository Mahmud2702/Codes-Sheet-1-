#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int min;
    if (A <= B && A <= C)
    {
        min = A;
    } else if (B <= A && B <= C)
    {
        min = B;
    } else
    {
        min = C;
    }
    int max;
    if (A >= B && A >= C)
    {
        max = A;
    } else if (B >= A && B >= C)
    {
        max = B;
    } else
    {
        max = C;
    }
    printf("%d %d\n", min, max);
}
