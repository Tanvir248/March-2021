//this code by Tanvir Rahman Sparta_i
#include<iostream>
#include<algorithm>
using namespace std;
#define CAPACITY 2000001
void ageSort(int arr[], int size){
    int i, j, flag;
    for( i=0; i<size; i++){
        cin>>arr[i];
    }
    sort(arr, arr+size);
    // for(i=0; i<size; i++){
    //     flag =0;
    //     for(j=0; j<size-1; j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //             // /*int temp = arr[j];
    //             // arr[j]= arr[j+1];
    //             // // arr[j+1]= temp;
    //             flag =1;
    //         }
    //     }
    //     if(flag ==0){
    //         break;
    //         }
    // }
    for(int i=0; i<size ;i++){
        cout<<arr[i];
        if(i < size-1) cout<<" ";
    }
    cout<<endl;
}
int main(){
    int a[CAPACITY];
    int t;
    cin>>t;

    while(t ==0) break;

    t= t+1;
    while (t--)
    {
       ageSort(a, t);
        break;
            }
    return 0;
            
}