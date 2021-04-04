#include <stdio.h>


int main() {
     int n, sum =0;
   int year;
   scanf("%d", &year);

   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d is a leap year\n", year);
   else
      printf("%d is not a leap year\n", year);

while (year!=0)
{
     n= year%10;
     
     sum +=n;
     year /= 10;
}
printf("Sum = %d\n", sum);

   return 0;
}