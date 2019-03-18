// https://www.geeksforgeeks.org/replace-every-array-element-by-multiplication-of-previous-and-next/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {2, 3, 4, 5, 6}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    int previous = arr[0];
    arr[0] = arr[0]*arr[1];

    for(int i = 1; i < n-1; i++){
    	int current = arr[i];
    	arr[i] = previous*arr[i+1];
    	previous = current;
    }

    arr[n-1] = previous*arr[n-1];

    for(auto c: arr) cout << c << " ";


	return 0;
}