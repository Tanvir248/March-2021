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
	rectangle(int h, int w);
	~rectangle();
};
inline int rectangle::area(){
    return width*hight;
}
rectangle::rectangle(int h, int w){
    hight =h;
    width =w;
	cout<<"Constructor = "<<area()<<endl;
}
rectangle::~rectangle(){
	cout<<"destructer = "<<area()<<endl; 
}
int main(){
	rectangle obj(10, 20);
	//	obj.hight = 10;
		//obj.width = 20;
	//int x = obj.hight*obj.width;
    //obj.set_val(10, 20);
	cout<<"Area = "<<obj.area()<<endl;
	return 0;
	}