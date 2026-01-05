#include <stdio.h>
int main()
{
    int a=7;
    //printf("%d ",sizeof(10));
    int arr[5]={10,20,30,40,50};//
    //           4  4  4  4  4 =20
    // printf("%d ",sizeof(arr));
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("%d",length);
    //                 40 / 4 = 10
    return 0;
}


#include <stdio.h>
int main()
{
    int a=7;
    //printf("%d ",sizeof(10));
    int arr[5]={10,20,30,40,50};//
    //           4  4  4  4  4 =20
    //printf("%d ",sizeof(arr));
    int length= sizeof (arr)/sizeof(arr[0]);
    printf("%d",length);
    //                 40 / 4 = 10
    return 0;
}