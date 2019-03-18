// https://www.geeksforgeeks.org/sort-binary-array-using-one-traversal/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {1,0,0,0,0,0,1,0,0,0,1,1,1,1,1,0,0,1,1,0,1,1,0,1};
	int n = sizeof(a)/sizeof(a[0]);

	int i = 0, j = 0;

	while(j < n){
		if(a[j] != 1) swap(a[i++], a[j++]);
		else j++;
	}

	for(auto c: a) cout << c << " ";

	return 0;
}