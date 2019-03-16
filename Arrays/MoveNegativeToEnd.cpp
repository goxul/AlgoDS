// https://www.geeksforgeeks.org/move-ve-elements-end-order-extra-space-allowed/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	// Required output: 1 7 5 11 6 -1 -3 -2 
	int arr[] = {1 ,-1 ,-3 , -2, 7, 5, 11, 6 }; 
    int n = sizeof(arr)/sizeof(arr[0]);

    int i = 0, j = 0;

    while(j < n){
    	if(arr[j] >= 0) swap(arr[i++], arr[j++]);
    	else j++;
    }

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    	
	return 0;
}