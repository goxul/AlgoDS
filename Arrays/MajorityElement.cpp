// Finding majority element in an array

// We have used Moore's voting algorithm in this program.


#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n){
	int candidate;
	int count = 0;

	for(int i = 1; i < n; i++){
		if(count == 0){
			candidate = arr[i];
			count++;
		}
		else if(candidate == arr[i]) count++;
		else count--;
	}

	return candidate;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2,3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);

	int majority = majorityElement(arr,n);

	cout << majority << endl;

	return 0;
}