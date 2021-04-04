#include<iostream>
using namespace std;
#define CAPACITY 10
int main(){
    int array[100];
    for(int i=0; i<CAPACITY; i++){
    cin>>array[i];
    if(array[i]==0 || array[i]< 0){ cout<<"x["<<i<<"] = "<<"1"<<endl;}
    else
    cout<<"x["<<i<<"] = "<<array[i]<<endl;
    }
    return 0;
    }
