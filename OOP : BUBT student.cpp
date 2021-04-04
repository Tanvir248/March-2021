#include<iostream>
using namespace std;
class bubt_Student{
    public:
    char name[40];
    int phone_number;
    int id_number;
    char email[200];
    void getinput();
    void print_result();
    void print_info();
};
 void bubt_Student:: getinput(){
        
  cout<<"Enter Student Name: ";
  scanf("%[^\n]%*c", name);
  cout<<"Enter Student Number: ";
  cin>>phone_number;
  cout<<"Enter Student id: ";
  cin>>id_number;
  cout<<"Enter Student Mail id: ";
  cin>>email;
  
    }
    void bubt_Student::print_info(){
        cout<<"Welcome to BUBT"<<endl;
        cout<<"It's need to 4lakh taka to fulfill your course in CSE.\n You need 40k per semseter\n It is a wonderful university for study if you want to admit here please start enter conditions"<<endl;
    }
    void bubt_Student::print_result(){
    cout<<" Your Name is: ";
  cout<<name<<endl;
  cout<<"Your Number is: ";
  cout<<phone_number<<endl;
  cout<<"Your Student id Number: ";
  cout<<id_number<<endl;
  cout<<"Your Mail id: ";
  cout<<email<<endl;
    }
int main(){
    bubt_Student ob;
    ob.print_info();
    ob.getinput();
    ob.print_result();
    return 0;
}