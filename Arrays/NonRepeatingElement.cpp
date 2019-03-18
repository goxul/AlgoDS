// https://www.geeksforgeeks.org/non-repeating-element/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = { 9, 4, 9, 6, 7, 4 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    map<int,int> mp;

    for(int i = 0; i < n; i++) mp[arr[i]]++;

    for(int i = 0; i < n; i++) if(mp[arr[i]] == 1){cout << arr[i] << endl; break;}

	return 0;
}