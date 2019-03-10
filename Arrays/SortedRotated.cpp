#include <bits/stdc++.h>

using namespace std;

int binSearch(int a[], int key, int start, int end){
	if(start > end) return -1;

	int mid = (start + end)/2;

	if(a[mid] == key) return mid;

	// If the left array is sorted

	if(a[start] <= a[mid]){
		if(a[start] <= key && a[mid] >= key) return binSearch(a,key,start,mid-1);
		else return binSearch(a,key, mid+1, end);
	}

	// If the right array is sorted
	
	else{
		if(a[mid] <= key && a[end] >= key) return binSearch(a,key,mid+1,end);
		else return binSearch(a,key, start, mid-1);
	}

}

int main(int argc, char const *argv[])
{
	int a[] = {30,40,50,10,20};
	int length = sizeof(a)/sizeof(a[0]);
	int key;

	cin >> key;

	int start = 0; 
	int end = length-1;
	// We are passing the indices to be searched - 0 to n-1

	int result = binSearch(a,key,start, end);

	cout << result;

	return 0;
}