#include <stdio.h>  
  
int main()  
{  
    int n,m=1;  
   
    n=4;  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        m++;  
    }  
    return 0;  
}  
