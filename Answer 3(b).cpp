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

int isPalindrome(char* string, int n)
{
    char *ptr, *reverse;
  int i, count1 =0,count2 =0;
  
    ptr = string;
  
    while (*ptr != '\0') {
        ++ptr;
    }
    --ptr;
  
    for (reverse = string; ptr >= reverse;) {
        if (*ptr == *reverse) {
            --ptr;
            reverse++;
        }
        else
            break;
    }
    for ( i = 0; i < n; i++)
    {
    if (reverse > ptr)
      { printf(" Palindrome\n");
    count1++;
    break;
    }
    else{
        printf("Not Palindrome\n");    
    count2++;
    break;
    }
    }
    return count1;
}
int main()
{
    char str[1000];
    int t, num,x, sum =0;
    printf("Number of string : ");
    scanf("%d",&t);
    getchar();
    num =t;
    while(t--){
    scanf("%[^\n]", str);
  getchar();
    x =isPalindrome(str, num);
   if(x>=1){
       sum++;
   }
    }
    printf("Total Palindrome : %d\n", sum);
    return 0;
}