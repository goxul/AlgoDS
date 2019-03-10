#include <bits/stdc++.h>
using namespace std;

int Count(int arr[], int n){
	int count;
	int i = 0, j = n - 1;

	while(i <= j){
		int middle = i + (j-i)/2;
		if(arr[middle] == 1 && (arr[middle+1] == 0 || middle == j)) return middle+1;
		else if(arr[middle] > 0) i = middle+1;
		else j = middle - 1;
	}

	return 0;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1,1,1,1,1,1,1,1,1,0,0,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "The count is: " << Count(arr,n) << endl;
	return 0;
}