#include <stdio.h>
int main() 
{
    char str[100];
    int i;
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != ' ')
            printf("%c", str[i]);
    }
    return 0;
}
