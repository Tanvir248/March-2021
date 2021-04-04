#include <stdio.h>
#include <stdlib.h>
using ull = unsigned long long;
using lln = long long int;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define SIZE 100
int isBinary(int decimal){
    int binary;
if (decimal == 0)
     return 0;
   else
      return (decimal % 2 + 10 *isBinary(decimal / 2));
}
int main(){
    int number,ans;
    printf("Decimal Number : ");
    scanf("%d", &number);
    ans = isBinary(number);
    printf("Binary Number : ");
    printf("%d\n", ans);
    return 0;
}