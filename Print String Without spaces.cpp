
#include<stdio.h>
#include<string.h>

int main()
{
 
         char a1[1000], a2[1000];
                 int i = 0, j = 0, len;

             printf("Enter the string: ");
             scanf("%[^\n]s",a1);

             len = strlen(a1);

           while(a1[i] != '\0') {
              if(a1[i] != ' ')
        {
 
                a2[j++] = a1[i];
        }

                      i++;
    }
    a2[j] = '\0';
    printf("The string without spaces is: %s\n", a2);

    return 0;
}


