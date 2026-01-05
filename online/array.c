#include <stdio.h>
int main()
{
    int array[5]={10,20,30,40,50};
    int length= sizeof(array)/sizeof
    (array[0]);//5
    for(int i=length-1;i>=0;i--){
        printf("%d ",array[i]);
    }
    return 0;
}