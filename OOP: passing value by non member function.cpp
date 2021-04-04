#include<iostream>
using namespace std;
class CGPA{
     private:
     double cgpa1;
     double cgpa2;
     public:
     //this member function help to input value...
     void input(double a, double b){
          cgpa1 = a;
          cgpa2 = b;
     }
     void print_resul(double ans);
};
//it's a member function that print the highest cgpa...
void CGPA::print_resul(double ans){
     cout<<"High CGPA is: "<<ans<<endl;
}
//non member function compare...
double compare(double a, double b){
     if(a>b)
     return a;
     else
     return b;
}
int main(){
     double a=3.48;
double b= 2.87;
     CGPA ob;
     ob.input(a, b);
    double x= compare(a, b);
    ob.print_resul(x);
    
     return 0;
}#include<iostream>
using namespace std;
class CGPA{
     private:
     double cgpa1;
     double cgpa2;
     public:
     //this member function help to input value...
     void input(double a, double b){
          cgpa1 = a;
          cgpa2 = b;
     }
     void print_resul(double ans);
};
//it's a member function that print the highest cgpa...
void CGPA::print_resul(double ans){
     cout<<"High CGPA is: "<<ans<<endl;
}
//non member function compare...
double compare(double a, double b){
     if(a>b)
     return a;
     else
     return b;
}
int main(){
     double a=3.48;
double b= 2.87;
     CGPA ob;
     ob.input(a, b);
    double x= compare(a, b);
    ob.print_resul(x);
    
     return 0;
}