#include<stdio.h>
int main()
{
 int arr[3];
 double sum =0, ans;
   int i;
   double n=3;//students number is 3...
   for(i=0; i<n; i++){
      scanf("%d", &arr[i]);
      sum+=arr[i];
   }
   for(i=0; i<3; i++){
      printf("student[%d] = %d\n",i+1, arr[i]);
   }
      printf(" sum = %.0lf\n", sum);
      printf("Average = %.2lf\n", sum/n);
    return 0;
}


