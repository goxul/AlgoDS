#include <bits/stdc++.h>

using namespace std;

void rotate(int a[], int n){
	int x = a[n-1];

	for(int i = n-1; i > 0; i--) a[i] = a[i-1];

	a[0] = x;

}

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5,6};

	int size = sizeof(a)/sizeof(a[0]);

	for(int i = 0; i < size; i++) cout << a[i] << " ";

	cout << endl;

	rotate(a,size);

	for(int i = 0; i < size; i++) cout << a[i] << " ";

	return 0;
}