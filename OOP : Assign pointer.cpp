#include<iostream>
using namespace std;
class sum{
	private:
	int num1;
	int num2;
	public:
	void input(int a, int b);
	int solve();
};
void sum :: input(int a, int b){
	num1=a;
	num2=b;
	
}int sum::solve(){
	return num1+num2;
}
int main(){
	sum obj;
	sum *ptr;
	obj.input(6, 8);
	ptr = &obj;
	cout<<obj.solve()<<endl;
	ptr->input(8, 8);
	
	cout<<ptr->solve()<<endl;
	return 0;
}