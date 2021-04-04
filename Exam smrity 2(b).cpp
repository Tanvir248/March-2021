///we know that area of a circle is pi*r^2 so now we calculate this equation...
#include<stdio.h>
#include<math.h>
#define PI 3.142857
int main(){
     double circle1, circle2;
     scanf("%lf%lf", &circle1, &circle2);
     double ansPizza1 =PI *pow((circle1/2), 2);
     double ansPizza2 = PI *pow((circle2/2), 2);
     printf("Area of one %.0lf inch pizza %0.2lf\n",circle1, ansPizza1);
     double n =ansPizza2+ansPizza2;
      printf("Area of two %.0lf inch pizza %0.2lf\n",circle2,n );
      if(ansPizza1>n){
           printf("One %.0lf inch pizza has more pizza!\n", circle1);
      }else{
           printf("One %.0lf inch pizza has more pizza!\n", circle2);
      }
      return 0;
}