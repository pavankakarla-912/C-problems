#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter the numbrer of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++) //outer loop
    {
        for(j=1;i<=n;j++) //space loop
           printf(" ");
        for(j=1;j<=2*i-1;j++)
           printf("*");
        printf("\n");
    }
    return 0;
}
      