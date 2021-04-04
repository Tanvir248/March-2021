#include<stdio.h>
#include<math.h>
int main(){
    double n, i, sum =0;
    scanf("%lf", &n);
    for ( i = 2; i <=n; i++)
    {
        sum += 1/pow(i, 2);
    }
    printf("Sum is : %lf\n", sum);
    return 0;
}