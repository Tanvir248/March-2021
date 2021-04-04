#include<iostream>
#include<algorithm>
using namespace std;
class threeFriends{
	private:
	double hight;
	int weight;
	int admit;
	public:
	//here I define compare member function 
	void compare(double x, int y, int z);
};//Do it by just one member function..
void threeFriends::compare(double x, int y, int z){
	hight =x;
	weight =y;
	admit =z;
		cout<<"Tallest friend is: "<<hight<<endl;
		cout<<"Haveast friend is: "<<weight<<endl;
		cout<<"First addmited friend is: "<<admit<<endl;
		
}
int main(){
	/* Here I want to do it by array but I think that trying manually is easy... 
	threeFriends ob[3];
	ob[0].compare(, 80, 27);
	ob[1].compare(64.7, 75, 21);
	ob[2].compare(58.7, 60, 28);*/

	threeFriends ob;

	double hight1 =68.7 ,hight2 =64.7, hight3 =58.7;
	int weight1 = 80, weight2 = 85, weight3 = 60;
	int date1 = 17, date2 = 11, date3 = 21;

	//find max value of hight..
	double a = max(hight1, hight2);
	double a1 = max(a, hight3);
	//find max value of weight..
	int b = max(weight1, weight2);
	int b1= max(b, weight3);
    //find minimum value of admit date..  
	int c = min(date1, date2);
	int c1 = min(c, date3);
	
	//assinging value to the member function...
	ob.compare(a1, b1, c1);
	return 0;
}