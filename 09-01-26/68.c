#include <stdio.h>
int main()
{
    int a[20], n, i, j, count;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++) {
        count = 1;
        if(a[i] != -1) {
            for(j = i + 1; j < n; j++) {
                if(a[i] == a[j]) {
                    count++;
                    a[j] = -1;
                }
            }
            printf("%d-%d ", a[i], count);
        }
    }
    return 0;
}
