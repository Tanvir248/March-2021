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
sum scan(){
	sum ob;
	int first, second;
	cin>>first>>second;
	ob.input(first, second);
	return ob;
}
void print(sum result){
    cout<<"The sum is: "<<result.solve()<<endl;
}
int main(){
	sum obj;
	obj = scan();
	cout<<obj.solve()<<endl;
	print(obj);
	return 0;
}
/*#include<iostream>
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
void print(sum ob){
    cout<<"The sum is: "<<ob.solve()<<endl;
}
int main(){
	sum obj;
	obj.input(10, 10);
    print(obj);
	return 0;
}*/