#include <stdio.h>
int main() 
{
    char sentence[200];
    int i, words = 0;
    printf("Enter feedback: ");
    gets(sentence); 
    if (sentence[0] == '\0') 
    {
        printf("0\n");
        return 0;
    }
    for (i = 0; sentence[i] != '\0'; i++) 
    {
        if ((i == 0 && sentence[i] != ' ') ||
            (sentence[i] != ' ' && sentence[i - 1] == ' ')) 
            {
            words++;
        }
    }
    printf("%d\n", words);
    return 0;
}
