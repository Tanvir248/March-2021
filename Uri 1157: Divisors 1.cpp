#include<iostream>
using namespace std;
int runDivisors(int numbers)
{
    for( int i=0; i<numbers; i++){
    if(numbers %i ==0)
    std::cout<<i<<std::endl;
    }
}
int main()
{
    int number;
    std::cin>>number;
    runDivisors(number);
    return 0;
}
