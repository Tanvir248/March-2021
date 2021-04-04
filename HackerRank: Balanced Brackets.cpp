#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
    cin.ignore();
    while(n--) {
       stack<char>st;
       string arr;
       getline(cin, arr);
      int ln = arr.size();

       for(int i=0; i<ln; i++){
          if(arr[i]=='(' || arr[i]=='{'||arr[i]=='[') st.push(arr[i]);
          else{

            if(arr[i]==')' && (st.empty() || st.top()!='(')){
                st.push('x');
                break;
            }
            if(arr[i]=='}' && (st.empty() || st.top()!='{')){
                st.push('x');
                break;
            }

            if(arr[i]==']' && (st.empty() || st.top()!='[')){
                st.push('x');
                break;
            }
            st.pop();
          }

       }

       if(st.empty()) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }
    return 0;
}
