//We see here#include<stdio.h> and #include<stdlib.h> are missing
//#include<stdlib.h> is always needed for memory alocation
//and also here we change pointer *ptr value by x.. scanf & printf spelling eror and 
//malloc function (int*) missing  and also a important thing free(); function was null it's 
//not working by this process because which kind of memory we free here we must be define that
//and also last missing is result printing...I also fixed that
#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
int x =5;
ptr = &x;
int n,i,result;
scanf("%d",&n); 
ptr=(int*)malloc(i*sizeof (int));
for(i=0;i<n; i++)
{
scanf("%d",ptr+i);
}
for(i=0;i<n;i++)
{
printf("%d \t",*(ptr+i));
}
for(i=0;i<n;i++)
{
result-=*(ptr+i);
}
printf("\n%d\n",result);
free(ptr);
 }
 //output
 /*
 5
1 2 3 4 5
1       2       3       4       5 
22081*/