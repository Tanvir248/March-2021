//This program says about sort all of number by ascending order and Descending so I use bubble sort for this
#include<stdio.h>
int main()
{
    int a[101],i,j,temp,n;
    
    scanf("%d",&n);
   
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
		printf("Ascending Order:");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }printf("\n");
	 for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
		printf("Descending Order: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}