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
void solve(){ 
            lln n, k;
    cin >> n >> k;
    
    lln cf = (n + k - 1) / k;
    k *= cf;
    
    cout << (k + n - 1) / n << endl;
}
int main(){
     lln t;
     cin>>t;
     while (t--)
     {
          
     solve();
    
     }
     return 0;
}