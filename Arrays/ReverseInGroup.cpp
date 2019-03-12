// https://www.geeksforgeeks.org/reverse-an-array-in-groups-of-given-size/

#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int n, int k){
	for(int i = 0; i < n; i +=k){
		int left = i;
		int right = min(n-1, i+k-1);

		while(left < right) swap(a[left++], a[right--]);
	}
}

int main(int argc, char const *argv[])
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int k = 3;
	int n = sizeof(arr)/sizeof(arr[0]);

	reverse(arr,n,k);

	for(int i = 0; i < n; i++) cout << arr[i] << " "; 	
	return 0;
}