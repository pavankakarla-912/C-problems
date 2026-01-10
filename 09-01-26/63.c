#include <stdio.h>
int main()
{
    int a, b, i, j, prime;
    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++) {
        prime = 1;
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }
        if(prime && i > 1)
            printf("%d ", i);
    }
    return 0;
}
