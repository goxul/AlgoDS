// https://www.geeksforgeeks.org/alternative-sorting/

// The trick is to sort the array and then print alternatively. Hence, O(1) space and O(nlogn) complexity.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {7, 1, 2, 3, 4, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);

	sort(arr,arr+n);

	int i = 0, j = n-1;

	while(i < j) cout << arr[j--] << " " << arr[i++] << " ";

	if(n % 2 != 0) cout << arr[i];

	return 0;
}