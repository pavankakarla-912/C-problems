#include <stdio.h>
#include <math.h>
int main()
{
    int num, temp, sum = 0, digit;
    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (sum == num)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
