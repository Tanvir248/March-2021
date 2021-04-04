#include<stdio.h>
int main(){
    int x;
    printf("Please Enter  nnmbbr: ");
    scanf("%d", &x);
    if(x%3 ==0)
    printf("Divsible by three\n");
    else
    printf("Please Enter Another Number.\n");
    return 0;
}
//i) Purpose of this progam is find a number wich is divisble by 3 or not....
//ii) In there x is a variable its intger data type. There has many type of datatypes double, float, string, char.
/*iii)
input:
The C library function scanf reads formatted input from stdin. If we want to take input from keyboard and need to take input undefine number for a variable this time we need scanf.
scanf("%datatypes", &variable); 
here "&" Because of define a memory for your choosen input if you don't need memory location this time you don't need "&".

In this program here use int type of variable so we use 
scanf("%d", &x);
for double type :
scanf("%lf", &x);
for float type: 
scanf("%f", &x);
for  char type:
scanf("%c", x);
for string type: 
scanf("%s", x);
Output :printf();

In C programming language, printf() function is used to print the (“character, string, float, integer, octal and hexadecimal values”) onto the output screen.
We use printf() function with %d format specifier to display the value of an integer variable.
Similarly %c is used to display character, %f for float variable, %s for string variable, %lf for double and %x for hexadecimal variable.
To generate a newline,we use “\n” in C printf() statement.
In this program here use int type of variable so we use 
printf("%d", x);
for double type :
printf("%lf", x);
for float type: 
printf("%f", x);
for  char type:
printf("%c", x);
for string type: 
printf("%s", x);*/