#include <stdio.h>
int main()
{
    int bin, dec = 0, base = 1;
    scanf("%d", &bin);
    while(bin > 0) {
        dec = dec + (bin % 10) * base;
        bin = bin / 10;
        base = base * 2;
    }
    printf("%d", dec);
    return 0;
}
