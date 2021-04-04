#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int >arr;
     for(int i=3; i<=100; i+=2){
     //cout<<i<<" ";
       if(i+(i+2)+(1+4)+(i+6) == 136){
               //cout<<i<<" ";
        cout<<i-10<<" "<<(i+2)-10<<" "<<(i+4)-10<<" "<<(i+6)-10<<" ";
         break;}
     }
}