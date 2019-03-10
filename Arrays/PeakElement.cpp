// Finding the peak element in a given array. 
// Proof: If middle element is directly peak, we return it. 
// If middle element is smaller than the left element, then the left side has a peak.
// Assume that the left side doesn't have a peak. Then A[middle-2] > A[middle-1]
// A[middle -3] > A[middle -2] and so on. Finally, A[0] > A[1], which means that it is a peak element.
// A similar symmetric argument can be made for the right side as well. 

#include <bits/stdc++.h>
using namespace std;

int peakElement(int a[], int n){
	int i = 0, j = n - 1;
	while(i <= j){
		int middle = i + (j-i)/2;
		// Got to handle the edge cases when the first or last element is the answer.
		// That is why the added the middle == 0 and middle == n-1 cases.
		if((a[middle] >= a[middle-1] || middle == 0) && (a[middle] >= a[middle+1] || middle == n-1)) return a[middle];
		else if(a[middle] < a[middle-1] && middle > 0) j = middle -1;
		else i = middle + 1;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int a[] = {100,4,3,2,1};
	int n = sizeof(a)/sizeof(a[0]);

	cout << "The peak element is: " << peakElement(a,n) << endl;

	return 0;
}