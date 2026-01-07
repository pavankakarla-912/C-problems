#include <stdio.h>
int main()
{
    int a, b, i;
    int power = 1;
    // input base and exponent
    scanf("%d %d", &a, &b);
    // loop to find power
    for(i = 1; i <= b; i++) {
        power = power * a;
    }
    // output
    printf("%d", power);
    return 0;
}
