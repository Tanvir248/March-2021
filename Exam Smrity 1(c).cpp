/*1) The expression used in switch must be integral type ( int, char and enum). 
Any other type of expression is not allowed.
You can make your switch as switch(char) . Convert your input to char (since it is 1 to 5 it can be a char).
 Then check for case '1': case '2' etc.
  Others have suggested using %c so that your not mixing characters with integers but you need to be careful with the rest of the code.
*/
#include <stdio.h>
#include<string.h>
int main()
{
 int i=5;
 char ch[i];
 scanf("%c", ch); //input B
 switch(i)
 {
 case 'A':
 printf("%d\n",++i);
 break;
 case 'B':
 printf("%d\n",++i);
 break;
 case 'C':
 printf("%d\n",++i);
 break;
 case 'D':
 printf("%d\n",i++);
 break;
 }
 return 0;
}