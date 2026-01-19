#include <stdio.h>
long long factorial(int n) 
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
int main() 
{
    int n;
    scanf("%d", &n);
    printf("%lld\n", factorial(n));
    return 0;
}
