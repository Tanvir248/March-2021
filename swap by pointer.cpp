#include<stdio.h>

int main()
{
    int a, b;
    int *p1, *p2;
    int temp;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("The values before swapping are: a = %d     b = %d", a, b);

    p1 = &a;    
    p2 = &b;    

    temp = *1;   
    *p1 = *p2;  
    *p2 = temp; 

    printf("The values after swapping are: a = %d    b = %d", a, b);
    return 0;

}