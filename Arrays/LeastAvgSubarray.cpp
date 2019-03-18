// https://www.geeksforgeeks.org/find-subarray-least-average/

// We use the sliding window technique here to find the minimum sum subarray 
// and that naturally gives us the minimum average subarray.
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] ={3,7,90,20,10,50,40};
	int n = sizeof(a)/sizeof(a[0]);

	int res_index = 0, k = 3;

	int curr_sum = 0;

	for(int i = 0; i < k; i++) curr_sum += a[i];

	int min_sum = curr_sum;

	for(int i = k; i < n; i++){
		curr_sum += a[i] - a[i-k];

		if(min_sum > curr_sum) min_sum = curr_sum, res_index = (i-k+1);
	}

	cout << res_index << " " << res_index + k -1 << " " << 	min_sum << endl;

	return 0;
}