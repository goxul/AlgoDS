// Here, the trick is to solve two subproblems - LIS ending at i and LDS starting from i.

// The same method can be used to solve maximum sum of bitonic sequence also.

#include <bits/stdc++.h>
using namespace std;

int lbs(int arr[], int n){
	int i, j;

	vector<int> lis(n,1);

	for(int i = 1; i < n; i++){
		for(j = 0; j < i; j++){
			if(arr[i] > arr[j] && lis[i] < lis[j] + 1)
				lis[i] = lis[j] + 1;
		}
	}

	vector<int> lds(n,1);

	for(int i = n-2; i >= 0; i--){
		for(j = n-1; j > i; j--){
			if(arr[i] > arr[j] && lds[i] < lds[j] + 1)
				lds[i] = lds[j] + 1;
		}
	}

	int max = 0;

	for(int i = 0; i < n; i++)
		if(lis[i] + lds[i] > max) max = lis[i] + lds[i];

	return max - 1;


}

int main() 
{ 
  int arr[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 
              13, 3, 11, 7, 15}; 
  int n = sizeof(arr)/sizeof(arr[0]); 
  printf("Length of LBS is %d\n", lbs( arr, n ) ); 
  return 0; 
} 