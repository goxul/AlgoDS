// https://www.geeksforgeeks.org/find-subarray-with-given-sum/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {1, 4, 20, 3, 10, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 42;
	// To give the output in terms of indices.
	// Naive approach will take O(n^2).
	// We can use a two pointer approach, which will take O(nlogn) afer sorting.
	// Sorry, we cannot sort as it will change the array structure.
	// Can we do it in one pass i.e O(n)?
	// Sliding Window? But of what size would it be? 

	int curr_sum = arr[0], start = 0, i;

	for(int i = 1; i < n; i++){
		// if current sum exceeds the sum, then start removing the elements from the back
		while(curr_sum > sum && start < i -1) curr_sum = curr_sum - arr[start++];
		// if current sum equals the sum, then print it
		if(curr_sum == sum){
			cout << start << " " << i-1;
			return 0;
		}
		if(i < n) curr_sum += arr[i];
	}

	return 0;
}