//this problem called that what is the minimum array and what is the maximum number from an array... 
#include<stdio.h>
using namespace std;
int main(){
    int arr[6]={10, 5, 7, 3, 49, 2};
    int i;
    int mx = arr[0];
    int mn = arr[5];
    for (i = 1; i <6 ; i++)
    {
        if(mx<arr[i]){
            mx = arr[i];
        }
    }
    printf("Max = %d\n", mx);
     for (i = 1; i <6 ; i++)
    {
        if(mn>arr[i]){
            mn = arr[i];
        }
    }printf("Min = %d\n", mn);
    int n = mx%mn;
    if(n%2==0){
        printf("Even\n");
    }else if(n%2 !=0){
        printf("Odd\n");
    }
    return 0;
}