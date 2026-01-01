#include <stdio.h>
int main()
{
    int n, i, count = 0;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
