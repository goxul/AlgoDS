// https://www.geeksforgeeks.org/find-the-maximum-element-in-an-array-which-is-first-increasing-and-then-decreasing/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {120, 100, 80, 20, 0};
	int n = sizeof(a)/sizeof(a[0]);
	// We have to use some variation of binary search for this problem. 
	// This is similar as find the peak element.
	int i = 0,j = n-1;
	while(i <= j){
		int mid = i + (j-i)/2;
		if((mid == 0 || a[mid-1] < a[mid]) && ( mid == n-1 || a[mid] > a[mid+1])){
			cout << a[mid];
			break;
		}
		else if(a[mid-1] > a[mid]) j = mid -1;
		else i = mid+1;
	}

	return 0;
}