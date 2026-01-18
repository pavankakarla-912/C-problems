#include <stdio.h>
int calculateTax(int salary) 
{
    if (salary <= 200000)
        return 0;
    else if (salary <= 500000)
        return salary * 0.10;
    else if (salary <= 800000)
        return salary * 0.20;
    else
        return salary * 0.30;
}
int main() 
{
    int salary;
    scanf("%d", &salary);
    printf("%d\n", calculateTax(salary));
    return 0;
}
