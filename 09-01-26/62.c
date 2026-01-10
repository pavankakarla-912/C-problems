#include <stdio.h>
int isPrime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++) {
        if(isPrime(i))
            sum += i;
    }
    printf("%d", sum);
    return 0;
}
