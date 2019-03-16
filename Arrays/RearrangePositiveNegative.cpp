// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/


#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {-12, 11, 0, -5, 6, -7, 5, -3, -6}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0, j = 0;

    while(j < n){
    	if(arr[j] < 0) swap(arr[i++], arr[j++]);
    	else j++;
    }

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
	return 0;
}