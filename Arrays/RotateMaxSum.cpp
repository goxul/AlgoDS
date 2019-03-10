#include <bits/stdc++.h>

using namespace std;
// https://www.geeksforgeeks.org/find-maximum-value-of-sum-iarri-with-only-rotations-on-given-array-allowed/

// This greedy approach fails :(

void rotate(int a[], int d, int n){

	while(d--){
		int x = a[n-1];

		for(int i = n-1; i > 0; i--){
			a[i] = a[i-1];
		}
		a[0] = x;
	}

	for(int i = 0; i < n; i++) cout << a[i] << " ";
}

int main(int argc, char const *argv[])
{
	int a[]	= {8,7,2,4};

	int max = a[0], max_index = 0;

	int size = sizeof(a)/sizeof(a[0]);

	for(int i = 0; i < size; i++) if(a[i] > max){
		max = a[i]; // This takes O(n) time
		max_index = i;
	}

	cout << max_index << " " << size << " " << endl;

	// We have to rotate the matrix (n-max_index - 1) times

	int d = size - max_index -1;

	cout << d << endl;

	rotate(a,d,size);

	return 0;
}