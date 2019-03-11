// https://www.geeksforgeeks.org/equilibrium-index-of-an-array/

// Very tricky solution: Notice that left_sum + pivot + right_sum = total sum of the array.

// Incomplete: Complete the implementation.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,3,2,1};
	int n = sizeof(a)/sizeof(a[0]);
	int leftSum = 0;
	int total = 0;

	for(int i = 0; i < n; i++) sum += a[i];

	for(int i = 0; i < n; i++){
		sum -= a[i];

		if(leftSum == sum) return i;

		leftSum += a[i];
	}

	return 0;
}