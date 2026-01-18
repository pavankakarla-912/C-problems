#include <stdio.h>
int bonus(int years) 
{
    if (years <= 1) return 1000;
    else if (years <= 3) return 3000;
    else if (years <= 5) return 7000;
    else if (years <= 7) return 10000;
    else return 15000;
}
int main() 
{
    int years;
    scanf("%d", &years);
    printf("%d\n", bonus(years));
    return 0;
}
