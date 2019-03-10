#include <bits/stdc++.h>

using namespace std;

int maxSum(int arr[], int n){

	int sum = 0;
	sort(arr,arr+n);

	for(int i = 0; i < n; i++) sum += i*arr[i];

	return sum;
}

int main(int argc, char const *argv[])
{
	int arr[] = {3,5,6,1};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << maxSum(arr,n) << endl;

	return 0;
}