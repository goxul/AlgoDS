#include <bits/stdc++.h>

using namespace std;

// Forward shift this by n - d elements.

void rotate(int a[], int rotate, int size){

	int b[size];

	for(int i = 0; i < rotate; i++){
		b[(i+1) % size] = a[i];
	}

	for(int i = 0; i < size; i++) cout << b[i];

	return;
}

int main(int argc, char const *argv[])
{
	int n, d;
	cin >> n >> d;

	int a[n];

	for(int i = 0; i < n; i++) cin >> a[i];

	rotate(a,n-d,n);

	return 0;
}