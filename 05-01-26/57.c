#include <stdio.h>
int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
int main()
{
    int num, temp, digit, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}
