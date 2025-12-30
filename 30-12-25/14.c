#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num % 2 == 0 || num % 3 == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
