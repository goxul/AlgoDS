// https://www.geeksforgeeks.org/find-sum-non-repeating-distinct-elements-array/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 1, 1, 4, 5, 6}; 
    int n = sizeof(arr)/sizeof(int); 
    map<int, int> mp;

    for(int i = 0; i < n; i++) mp[arr[i]]++;

    int sum = 0;

    for(auto i: mp) if(i.second == 1) sum += i.first;

    cout << sum << endl;

	return 0;
}