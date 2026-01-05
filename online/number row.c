#include <stdio.h>
int main()
{
    int a; //3
    scanf("%d",&a);
    for (int i=1 ; i<=a ;i++){
        for(int s = 1 ; s <= a-i ; s++){
            printf (" ");
        }
        for(int j=1 ; j<=i ; j++){
            printf("%d",j);
        }
        for(int k=i-1 ; k >= 1 ; k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a; //3
    scanf("%d",&a);
    for(int i=1  ; i<=a ; i++){
        for (int s = 1 ; s <= a-i ; s++){
            printf(" ")
        }
        for(int j=1 ; j<=i ; j++){
            printf("%d",j);
        }
        for(int k=i-1 ; k >= 1 ; k==){
            printf ("%d",k);
        }
        printf("\n");
          }
          return 0;
}