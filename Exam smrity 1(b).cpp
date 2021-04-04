/*
It's questions wrong code...
#include <stdio.h>
int main() {
 int i, j=2;
 for(i=0: j>0, i<5: i++)
 {
 printf("%d \t",i+j);
 j--;
 }
}*/
//Here I write down the right code...
#include <stdio.h>
int main() {
 int i, j=2;
 for(i=0; j>0, i<5; i++)
 {
 printf("%d \t",i+j);
 j--;
 }
}
 /* Explantation: 
 In this case you make a mistake in the loop. I here you want to run a nated loop by one line but
 hee your use ":" colon not there you need to use ";" for the output.
 Your output is:
     2       2       2       2       2
 */