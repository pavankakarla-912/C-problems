#include <stdio.h>
float attendancePercentage(int attended, int total) 
{
      return ((float)attended / total) * 100;
}
int main() 
{
    int attended, total;
   scanf("%d %d", &attended, &total);
   printf("%.0f%%\n", attendancePercentage(attended, total));
   return 0;
}
