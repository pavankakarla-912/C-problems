#include <stdio.h>
int main() 
{
    int n,i;
    char num[100];
    int arr[100];
    scanf("%d",&n);
    scanf("%s",num);
    for (i = 0;i < n;i++) {
        arr[i]=num[i]-'0';
    }
    for (i = 0;i < n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}