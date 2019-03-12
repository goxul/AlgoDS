// https://www.geeksforgeeks.org/count-distinct-elements-in-an-array/

// Here, we are using an unordered set as a hash table to count distinct elements in an array.

#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n){
	unordered_set<int> s;
	int res = 0;

	for(int i = 0; i < n; i++){
		// This is used to check if the item is present or not.
		// The find function returns the end value if an iterm is not present.
		if(s.find(arr[i]) == s.end()){
			s.insert(arr[i]);
			res++;
		}
	}

	return res;
}

int main(int argc, char const *argv[])
{
	int arr[] = { 6, 10, 5, 4, 9, 120, 4, 6, 10 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << countDistinct(arr, n); 
	return 0;
}