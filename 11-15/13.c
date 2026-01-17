#include <stdio.h>
#include <string.h>
int main() 
{
    char url[100];
    scanf("%s", url);
    if (strncmp(url, "http://", 7) == 0 || strncmp(url, "https://", 8) == 0)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}
