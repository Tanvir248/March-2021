#include<iostream>
using namespace std;
class teacher{
	private:
	int teacher_code;
	int course_num;
	int hours;
	public:
	//constructor overloading
	teacher(){
		int input =0;
	}
	//input constructor data
	teacher(int a, int b,int c){
	teacher_code=a;
	course_num= b;
	hours = c;
	
	
	}
	~teacher();

};
//destructor output
teacher::~teacher(){
	for(int i=0; i<5; i++){
		cout<<"Teacher code is: "<<teacher_code<<endl;
		cout<<"Course Number is: "<<course_num<<endl;
		cout<<"Total hours: "<<hours<<endl;
	}
}

int main(){
	//constructor input by array...
	teacher ob[5] ={teacher(10177,101, 2 ),teacher(10178,111, 3 ),teacher(10169,112, 1 ),teacher(10148,121, 2 ),teacher(10120,122, 4 )};
	
	return 0;
}