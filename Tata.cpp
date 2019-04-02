#include <bits/stdc++.h>
using namespace std;

int sum = 0;
int i;

void check(int n){
	//cout << i << endl; i++;
	if(n < 10){sum += n; return;}
	int temp = n%10;
	sum += temp;
	n = n/10;
	cout << "Value of n is: " << n << endl;
	check(n);
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	check(n);
	cout << sum << endl;
	return 0;
}