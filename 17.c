#include <stdio.h>
char calculateGrade(int marks) 
{
    if (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 40) return 'D';
    else return 'F';
}
int main() 
{
    int marks;
    scanf("%d", &marks);
    printf("%c\n", calculateGrade(marks));
    return 0;
}
