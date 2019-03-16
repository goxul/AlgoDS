// https://www.geeksforgeeks.org/move-zeroes-end-array/

// The concept is that we maintain two pointers. The first one is for current, the second
// one is for the next. Now, if we encounter a non-zero element, then we swap current and next
// and move on to the next index. Else, we keep incrementing next till we find the 
// first non-zero element and then swap it.

// There are multiple variations of this problem: we can use it to rearrange positive and negative
// numbers, to rearrange even and odd numbers and so on. This is helpful because it is O(n) and O(1)
// space.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0, j = 0;

    while(j < n){
    	if(arr[j] != 0) swap(arr[i++], arr[j++]);
    	else j++;
    }

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
	return 0;
}