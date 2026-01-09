#include <stdio.h>
#include <string.h>
int main() 
{
    char ch1[20]="hello";
    char ch2[20]="hello";
    fgets(ch1,20,stdin);
    fgets(ch2,20,stdin);
    //scanf("%s",ch1);
    //scanf("%s",ch2);
    int res=strcmp(ch1,ch2);
    if(res==0){
        printf("equal");
    }
    else{
        printf("not equal");
    }
    return 0;
}