// https://www.geeksforgeeks.org/smallest-sum-contiguous-subarray/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {3, -4, 2, -3, -1, 7, -5};
	int n = sizeof(arr)/sizeof(arr[0]);

	int dp[n];

	for(int i = 0; i < n; i++) dp[i] = arr[i];

	for(int i = 1; i < n; i++){
		dp[i] = min(arr[i], dp[i-1] + arr[i]);
	}

	int min = INT_MAX;

	for(int i = 0; i < n; i++) if(dp[i] < min) min = dp[i];

	cout << min << endl;
	return 0;
}