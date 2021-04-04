#include<iostream>
using namespace std;
class tree {
  public:
    string Name;
    int length;
    void display(string s, int a) {
      cout<<" Apple Color is "<<s<<" "<<"and Price "<<a<<endl;
    cout<<" Orange Color is "<<s<<" "<<"and Price "<<a<<endl;
    
    }
};

// Derived class
class Apple: public tree {
  public:
    string color= "Red";
    int price = 150;
};
class Orange:public tree{
 public:
    string color = "Orange";
    int price = 120;
};
int main() {
  Apple a;
   Orange o;
  a.display(a.color, a.price);
  
  o.display(o.color, o.price);
 
  return 0;
}