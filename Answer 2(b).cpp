////Answer 2(b)
//We see here#include<stdio.h> and #include<stdlib.h> are missing
//#include<stdlib.h> is always needed for memory alocation
//and change here '&' before p2 = p1;
//we just dfine int a; value again down the *p1 and *p2 new value.
//baceause we know that c value will change after define new value so i do this
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;
int *p1;
int *p2;
p1=&a;
p2=p1;
a=100;
printf("\nValue of a (using p1): %d",*p1);
printf("\nValue of a (using p2): %d",*p2);
*p1=200; 
p1 = &a;
a=100;
printf("\nValue of a(using p1) after change: %d",*p1);
*p2=200;
 p2 = &a;
 a=100;
printf("\nValue of a(using p2) after change: %d",*p2);
return 0;
}