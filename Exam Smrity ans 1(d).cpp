
//1(d)
#include <stdio.h>
int main()
{
 int i=0;
 do
 {
 printf("%d\n",(++i>2)?i++:++i);
 }
 while(i<3);
 return 0;
}
/*It's a right code
output is:
2
3
*/