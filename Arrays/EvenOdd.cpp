// https://www.geeksforgeeks.org/segregate-even-odd-numbers-set-3/

// Here, we are doing it without any order.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {1,3,2,4,7,6,9,10}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0, j = 0;

    while(j < n){
    	if(arr[j] % 2 == 0) swap(arr[i++], arr[j++]);
    	else j++;
    }

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
	return 0;
}