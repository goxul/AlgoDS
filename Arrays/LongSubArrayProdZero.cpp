// https://www.geeksforgeeks.org/longest-sub-array-whose-product-is-0/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	

	int count = 0;

	for(int i = 0; i < n; i++){
		if(a[i] == 0) count++; 
	}

	if(count) cout << n << endl;
	else cout << 0 << endl;

	return 0;
}