#include <stdio.h>
#include <stdlib.h>
#include<string.h>
using ull = unsigned long long;
using lln = long long int;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define SIZE 100
 
struct Employee{
       int id;
    char name[30];
    
    int salary;
    int birth_year;
 
};
 
int main()
{
    int i, n;
 printf("Number of Employee : ");
 scanf("%d", &n);
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);
        
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
        //Birth Year
        printf("Birth Year: ");
        scanf("%d",&employees[i].birth_year);
        printf("\n");
    }
 
    //Displaying Employee details
 
    for(i=0; i<n; i++){
 
        printf("Employee  ");
        printf("%d ",employees[i].id);
        printf("%s ",employees[i].name);
 
        printf("Gets ");
        printf("%d ",employees[i].salary);
  printf("tk and age ");
  printf("%d ",2021 - employees[i].birth_year);
       printf("Years ");
        printf("\n");
    }
    //Bubble sort method for finding second highest salary...
    int swapped = 0;
    
    for (int i = 0; i < (n-1); ++i) {

      if (employees[i].salary > employees[i+1].salary) {

        int temp = employees[i].salary;
        employees[i].salary = employees[i+1].salary;
        employees[i+1].salary = temp;
        
        swapped = 1;
        }
        }
        for ( i = 0; i < n; i++)
        {
            printf("Second Highest Salary %d\n",employees[1].salary);
            printf("Employee Name %s",employees[1].name);
        }
    return 0;
}