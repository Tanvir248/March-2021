//This methood called Member function
#include<iostream>
using namespace std;
class rectangle
{
	public:
	int hight;
	int width;
	int area();
};
int rectangle::area(){
    return width*hight;
}
int main(){
	rectangle obj;
	obj.hight = 10;
	obj.width = 20;
	//int x = obj.hight*obj.width;
	cout<<"Area = "<<obj.area()<<endl;
	return 0;
	}
//with inline function
/*#include<iostream>
using namespace std;
class rectangle
{
	public:
	int hight;
	int width;
	int area();
};
inline int rectangle::area(){
    return width*hight;
}
int main(){
	rectangle obj;
	obj.hight = 10;
	obj.width = 20;
	//int x = obj.hight*obj.width;
	cout<<"Area = "<<obj.area()<<endl;
	return 0;
	}*/

/*#include<iostream>
using namespace std;
class rectangle
{
	public:
	int hight;
	int width;
	int area(){
		return hight*width;
	}
};
int main(){
	rectangle obj;
	obj.hight = 10;
	obj.width = 20;
	//int x = obj.hight*obj.width;
	cout<<"Area = "<<obj.area()<<endl;
	return 0;
	}

*/
