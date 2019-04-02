#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; 
	cin >> n;
	vector<int> fibo(n);
	fibo[0] = 0; fibo[1] = 1;
	for(int i = 2; i < n; i++) fibo[i] = fibo[i-1] + fibo[i-2];

	for(int i = n-1; i >= 0; i--) cout << fibo[i] << " ";

	return 0;
}