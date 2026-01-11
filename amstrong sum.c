#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n,ori=n;
    int len=0;
    while(n!=0){
        n=n/10;
        len++;
    }
    int sum=0;
    while(temp!=0){
        int rem=temp%10;
        int pows=1;
        for(int i=0;i<len;i++){
            pows=pows*rem;
        }
        sum=sum+pows;
        temp=temp/10;
    }
    if(sum==ori){
        printf("Amastrong Number");
    }
    else{
        printf("Not Amastrong Number");
    }
    return 0;
}