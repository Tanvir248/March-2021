#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void isreverse(char c[100]){
    int temp;
    int i = 0;
   int j = strlen(c) - 1;
 int x;
   while (i < j) {
      temp = c[i];
      c[i] = c[j];
      c[j] = temp;
      i++;
      j--;
   }
 for ( x = 0; x < 3; x++)
 {
     printf("%s \n", c);
 }
 
  
}
int main() {
    char str[1000];
    FILE *fptr;
    
    if ((fptr = fopen("input.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }
    int i;
    for ( i = 0; i < 3; i++)
    {    
    fscanf(fptr, "%[^\n]", str);
    }
    
   isreverse(str);
    fclose(fptr);

    return 0;
}