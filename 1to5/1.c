#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char username[50];
    int i, len;
    printf("Enter username:");
    scanf("%s", username);
    len = strlen(username);
    if (len < 6 || len > 12)
    {
        printf("Invalid\n");
        return 0;
    }
    if (isdigit(username[0])) 
    {
        printf("Invalid\n");
        return 0;
    }
    for (i = 0; i < len; i++) 
    {
        if (!(islower(username[i]) || isdigit(username[i]))) 
        {
            printf("Invalid\n");
            return 0;
        }
    }
    printf("Valid\n");
    return 0;
}
