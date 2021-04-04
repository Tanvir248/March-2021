#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define SIZE 100
int solve(int num1,int num2){
 return num1-num2;
}
int main(){
    int a ,b, c, d;
    cin>>a>>b>>c>>d;
    int ans = solve(b, c);
    cout <<ans<<endl;
    
    return 0;
}
