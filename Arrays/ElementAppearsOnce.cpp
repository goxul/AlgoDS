// https://www.geeksforgeeks.org/find-the-element-that-appears-once-in-a-sorted-array/

// Here, we are applying binary search using the index and a very key observation.
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {1, 1, 2, 2,3,3,4,4,5,6,6,7,7}; 
    int len = sizeof(arr)/sizeof(arr[0]); 

    int i = 0, j = len -1;

    while(i < j){
    	int mid = i + (j-i)/2;

    	if(mid % 2 == 0){
    		if(arr[mid] == arr[mid+1]) i = mid+1;
    		else j = mid-1;
    	}
    	else{
    		if(arr[mid] == arr[mid-1]) i = mid+1;
    		else j = mid-1;
    	}
    }

    cout << arr[i];


	return 0;
}