#include <stdio.h>
#include <string.h>
int main() 
{
    char filename[100];
    int len;
    scanf("%s", filename);
    len = strlen(filename);
    if (len >= 4 && strcmp(filename + len - 4, ".txt") == 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}
