// https://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/
// Other approaches include naive two for loops and hashing. Hashing will take O(n) space.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 2, 3, 1, 3};
	int n = sizeof(arr)/sizeof(arr[0]);

	int res = 0;

	for(int i = 0; i < n; i++) res ^= arr[i];

	cout << res << endl;


	return 0;
}