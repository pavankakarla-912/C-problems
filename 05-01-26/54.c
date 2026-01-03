#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    int i;
    printf("Enter string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    printf("Lowercase: %s", str);
    return 0;
}



#include <stdio.h>
#include <ctype.h>
{
    char str[100];
    int i;
    printf("Enter string:");
    gets(str);
    for (i=0;str[i]!= '\0';i++){
        str[i]=tolower(str[i]);
    }
    printf("Lowercase: %s",str);
    return 0;
}
