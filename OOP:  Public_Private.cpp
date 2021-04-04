#include<iostream>
using namespace std;
class rectangle
{
	private:
	int hight =10;
	int width= 20;
	public:
    void set_val(int h, int w);
	int area();
};
inline int rectangle::area(){
    return width*hight;
}
void rectangle::set_val(int h, int w){
    hight =h;
    width =w;
}
int main(){
	rectangle obj;
	//	obj.hight = 10;
		//obj.width = 20;
	//int x = obj.hight*obj.width;
    obj.set_val(10, 20);
	cout<<"Area = "<<obj.area()<<endl;
	return 0;
	}
    /*#include<iostream>
using namespace std;
class rectangle
{
	private:
	int hight =10;
	int width= 20;
	public:
	int area();
};
inline int rectangle::area(){
    return width*hight;
}
int main(){
	rectangle obj;
	//	obj.hight = 10;
		//obj.width = 20;
	//int x = obj.hight*obj.width;
	cout<<"Area = "<<obj.area()<<endl;
	return 0;
	}*/