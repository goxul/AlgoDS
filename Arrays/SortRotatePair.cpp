#include <bits/stdc++.h>

// The trick in this problem is to find the pivot element and make it the same as one for sorted array.
// One thing that needs to be taken care of is use of modulus, as we cannot directly increment in this.

using namespace std;

bool sum(int a[], int key, int n){
	int i;
	for(i = 0; i < n; i++){
		if(a[i] > a[i+1])
			break;
	}

	int l = (i+1)%n;
	int r = i;

	if(a[l] + a[r] == key) return true;

	while(l != r){
		if(a[l] + a[r] < key){
			l = (l+1)%n;
			if(a[l] + a[r] == key){cout << a[l] << " " << a[r] << endl; return true;}
		}
		else{
			r = (n+r-1)%n;
			if(a[l] + a[r] == key) {cout << a[l] << " " << a[r] << endl; return true;}
		}

	}

	return false;


}

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5,6};
	int key;
	int n = sizeof(a)/sizeof(a[0]);

	cin >> key;

	bool result = sum(a,key,n);

	cout << result;

	return 0;
}