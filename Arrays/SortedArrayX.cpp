// https://www.geeksforgeeks.org/given-sorted-array-number-x-find-pair-array-whose-sum-closest-x/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] =  {10, 22, 28, 29, 30, 40}, x = 54; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    int i =0, j = n-1;
    int left, right, diff = INT_MAX;

    while(i < j){
    	if(abs(arr[i] + arr[j] - x) < diff){
    		diff = abs(arr[i] + arr[j] - x);
    		left = i, right = j;
    	}
    	else if(arr[i] + arr[j] > x) j--;
    	else i++;
    }

    cout << arr[left] << " " << arr[right] << endl;
	return 0;
}