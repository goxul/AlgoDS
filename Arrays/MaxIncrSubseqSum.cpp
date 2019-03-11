// https://www.geeksforgeeks.org/maximum-sum-increasing-subsequence-dp-14/
// Here, result[i] stores the maximum sum that can be achieved till that index.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {1, 101, 2, 3, 100, 4, 5};
	int n = sizeof(a)/sizeof(a[0]);

	int result[n];

	for(int i = 0; i < n; i++) result[i] = a[i];

	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[i] > a[j] && result[j] + a[i] > a[i])
				result[i] = result[j] + a[i];
		}
	}

	int max = 0;
	for(int i = 0; i < n; i++){
		if(max < result[i]) max = result[i];
	}

	cout << "The length is: " << max << endl;
	return 0;
}