// https://www.geeksforgeeks.org/find-a-fixed-point-in-a-given-array/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {-10, -5, 3, 4, 7, 9};
	int n = sizeof(a)/sizeof(a[0]);
	int i = 0, j = n-1;

	while(i <= j){
		int mid = i + (j-i)/2;
		if(a[mid] == mid){
			cout << mid;
			return 0;
		}
		else if(a[mid] < mid) i = mid + 1;
		else j = mid -1;
	}

	cout << "Index not found." << endl;

	return 0;
}