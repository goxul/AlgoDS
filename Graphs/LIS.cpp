#include <bits/stdc++.h>

// This problem solves maximum subsequence sum

int max(int a, int b){return (a > b)? a:b; }

using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5,6,7,8};

	int b[9];

	b[0] = 0;
	b[1] = a[0];

	for(int i = 2; i < 9; i++){
		b[i] = max(a[i], b[i-1]+a[i]);
	}

	for(int i = 0; i < 9; i++) cout << b[i] << " ";

	cout << endl;

	cout << b[8] << endl;

	return 0;
}