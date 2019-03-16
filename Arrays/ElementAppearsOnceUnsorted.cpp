// https://www.geeksforgeeks.org/find-element-appears-array-every-element-appears-twice/

// This can also be done by XORing all the numbers to find out the one that is non-repeated.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int ar[] = {7, 3, 5, 4, 5, 3, 4};
	map<int,int> mp;
	int n = sizeof(ar)/sizeof(ar[0]);

	for(int i = 0; i < n; i++){
		mp[ar[i]]++;
	}

	for(auto i: mp) if(i.second == 1) cout << i.first << endl;

	return 0;
}