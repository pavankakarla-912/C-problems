#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100], temp;
    scanf("%s", str);
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) 
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s", str);
    return 0;
}
