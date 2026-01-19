#include <stdio.h>
void evenOdd(int n) 
{
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}
int main() 
{
    int n;
    scanf("%d", &n);
    evenOdd(n);
    return 0;
}
