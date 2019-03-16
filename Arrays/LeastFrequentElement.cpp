// https://www.geeksforgeeks.org/least-frequent-element-array/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {1, 3, 2, 1, 2, 2, 3, 1};
	unordered_map<int,int> mp;
	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i = 0; i < n; i++) mp[arr[i]]++;

	int count = INT_MAX, element;

	for(auto i: mp) if(i.second < count){element = i.first, count = i.second;}

	cout << "The element is: "<< element << " and the count is: " << count << endl;

	return 0;
}