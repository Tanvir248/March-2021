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
	sum obj[5];
	obj[0].input(6, 7);
	obj[1].input(4, 7);
	
	obj[2].input(1, 7);

	obj[3].input(100, 7);

	obj[4].input(48, 7);
	for(int i=0; i<5; i++){
		cout<<i+1<<" Sum is : "<<obj[i].solve()<<endl;
	}
	return 0;
}