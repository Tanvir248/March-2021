//Tanvir Rahman
#include<bits/stdc++.h>
using namespace std;
vector<int> Union(101);
vector<int>::iterator start, st;
void solve(int num1,int num2){
	int arr1[101], arr2[101];
	int i, j;
	for(i=0;i<num1; i++){
		cin>>arr1[i];
	}
	for(j=0; j<num2; j++){
		cin>>arr2[j];
	}
	
    sort(arr1, arr1 + num1);
    sort(arr2, arr2 + num2);
 
   
    start = set_union(arr1, arr1 + num1, arr2, arr2 + num1, Union.begin());
 
   
    for (st = Union.begin(); st != start; ++st)
        cout << *st<<" ";
    cout << '\n';
 
}
int main(){
	int size1, size2;
		cin>>size1>>size2;
		solve(size1, size2);
	
}