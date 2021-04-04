#include<iostream>
using namespace std;
class rectangle
{
	public:
	int hight;
	int width;
};
int main(){
	rectangle obj;
	obj.hight = 10;
	obj.width = 20;
	int x = obj.hight*obj.width;
	cout<<"Area = "<<x<<endl;
	return 0;
	}

