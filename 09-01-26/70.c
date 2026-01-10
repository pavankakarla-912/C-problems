#include <stdio.h>
int main() 
{
    char str[50];
    int i, j, count;
    gets(str);
    for(i = 0; str[i] != '\0'; i++) {
        count = 1;
        if(str[i] != '*') {
            for(j = i + 1; str[j] != '\0'; j++) {
                if(str[i] == str[j]) {
                    count++;
                    str[j] = '*';
                }
            }
            printf("%c%d ", str[i], count);
        }
    }
    return 0;
}
