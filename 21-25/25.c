#include <stdio.h>
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }
int main() 
{
    int a, b;
    scanf("%d %d",&a,&b);                                              
    printf("Addition:%d\n",add(a,b));
    printf("Subtraction:%d\n",subtract(a,b));
    printf("Multiplication:%d\n",multiply(a,b));
    printf("Division: %.2f\n",divide(a,b));
    return 0;
}