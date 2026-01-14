#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int count1[256] = {0}, count2[256] = {0};
    scanf("%s %s", a, b);
    if (strlen(a) != strlen(b)) {
        printf("Not Anagram");
        return 0;
    }
    for (int i = 0; a[i]; i++) {
        count1[a[i]]++;
        count2[b[i]]++;
    }
    for (int i = 0; i < 256; i++) 
    {
        if (count1[i] != count2[i]) 
        {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}
