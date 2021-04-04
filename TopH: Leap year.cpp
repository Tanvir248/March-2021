#include <bits/stdc++.h>
using namespace std;

void leapYear(int year){
	if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout <<"Yes"<<endl;
            else
                cout <<"No"<<endl;
        }
        else
            cout <<"Yes"<<endl;
    }
    else
        cout <<"No"<<endl;

}
int main() {
    long long int yearNumber;

    cin >> yearNumber;
	leapYear(yearNumber);

    
    return 0;
}