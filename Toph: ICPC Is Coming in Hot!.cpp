
#include<bits/stdc++.h>
using namespace std;
void countNumber(int number){
		int  n1=0, x, n2=0, n3=0, n4=0, n5=0, n6=0, n7=0, n8=0, n9=0, n0=0, count=0;
	
	while(number !=0){
		x = number%10;
		
		//count++;
		if(x ==0){
			n0++;
		}
		else if(x ==1)
			n1++;
		else if(x==2)
			n2++;
		else if(x==3)
			n3++;
			else if(x==4)
			n4++;
			else if(x==5)
			n5++;
			else if(x==6)
			n6++;
			else if(x==7)
			n7++;
			else if(x==8)
			n8++;
			else if(x==9)
			n9++;
			
		
		number = number/10;
	}
	// cout<<"Counted data is: "<<count<<endl;
	// cout<<"Integer 0 is: "<<n0<<" times."<<endl;
	// cout<<"Integer 1 is: "<<n1<<" times."<<endl;
	// cout<<"Integer 2 is: "<<n2<<" times."<<endl;
	// cout<<"Integer 3 is: "<<n3<<" times."<<endl;
	// cout<<"Integer 4 is: "<<n4<<" times."<<endl;
	// cout<<"Integer 5 is: "<<n5<<" times."<<endl;
	// cout<<"Integer 6 is: "<<n6<<" times."<<endl;
	// cout<<"Integer 7 is: "<<n7<<" times."<<endl;
	// cout<<"Integer 8 is: "<<n8<<" times."<<endl;
	// cout<<"Integer 9 is: "<<n9<<" times."<<endl;
	
	if(n0>n1 && n0>n2 && n0>n3 &&n0>n4 &&n0>n5 &&n0>n6 &&n0>n7 &&n0>n8 &&n0>n9){
		cout<<0<<endl;
	}
	else if(n1>n0 && n1>n2 && n1>n3 &&n1>n4 &&n1>n5 &&n1>n6 &&n1>n7 &&n1>n8 &&n1>n9){
		cout<<1<<endl;
	}
	else if(n2>n0 && n2>n1 && n2>n3 &&n2>n4 &&n2>n5 &&n2>n6 &&n2>n7 &&n2>n8 &&n2>n9){
		cout<<2<<endl;
	}
	else if(n3>n0 && n3>n1 && n3>n2 &&n3>n4 &&n3>n5 &&n3>n6 &&n3>n7 &&n3>n8 &&n3>n9){
		cout<<3<<endl;
	}
	else if(n4>n0 && n4>n2 && n4>n3 &&n4>n1 &&n4>n5 &&n4>n6 &&n4>n7 &&n4>n8 &&n4>n9){
		cout<<4<<endl;
	}
	else if(n5>n0 && n5>n2 && n5>n3 &&n5>n4 &&n5>n1 &&n5>n6 &&n5>n7 && n5>n8 &&n5>n9){
		cout<<5<<endl;
	}
   else	if(n6>n0 && n6>n2 && n6>n3 &&n6>n4 &&n6>n5 &&n6>n1 &&n6>n7 &&n6>n8 &&n6>n9){
		cout<<6<<endl;
	}
	else if(n7>n0 && n7>n2 && n7>n3 &&n7>n4 &&n7>n5 &&n7>n6 &&n7>n1 &&n7>n8 &&n7>n9){
		cout<<7<<endl;
	}
	else if(n8>n0 && n8>n2 && n8>n3 &&n8>n4 &&n8>n5 &&n8>n6 &&n8>n7 &&n8>n1 &&n8>n9){
		cout<<8<<endl;
	}
	else
	cout<<9<<endl;
	
}
int main(){
	int number;
	
cout << "Enter numbers separated by a space" << endl;
do 
{
  cin >> number;
 countNumber(number);
	break;
}while (true);

	
	return 0;
}