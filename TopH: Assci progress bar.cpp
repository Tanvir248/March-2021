#include<bits/stdc++.h>
using namespace std;
void solve(int rate, int parcent){
	int tmp = (int) (rate / 10.0);

	printf ("[");
	for (int i=0; i < tmp; ++i){
		printf ("+");
	}
	for (int j=10; j > tmp; --j)
		printf (".");
	printf ("] %d%c\n", parcent, '%');
}
int main()
{
	double input;
	int parcent;

	scanf ("%lf", &input);
	parcent= input;
	solve(input, parcent);
	return 0;
}