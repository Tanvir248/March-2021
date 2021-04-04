//1(a). In your code your make a mistake to prinft line your can't write ";" semiclone here...
#include <stdio.h>
int main()
{
 int i,j;
 i=j=3,4;
 while(--i && j++)
 printf("%d %d \n",i,j);
}
/*Output of your code is:
2 4 
1 5 
*/