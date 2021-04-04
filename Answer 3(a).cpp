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
void MySwap(int** x, int** y){

ull a = (ull)*x;
ull b = (ull)*y;

a = a^b;
b = a^b;
a = a^b;

*x = (int*)a;
*y = (int*)b;
}

int main(){

int num1, num2;
printf("Enter Two Number : ");
scanf("%d%d",&num1, &num2);
int* a = &num1;
int* b = &num2;
(*a) = (*a)+(*b);
(*b) = (*a)-(*b);
(*a) = (*a)-(*b);

printf("Num 1: %d\n", *a);
printf("Num 2: %d\n", *b);
 return 0;
}
