// https://www.geeksforgeeks.org/frequent-element-array/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = { 10, 20, 10, 20, 30, 20, 20 };
	map<int,int> mp;
	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i = 0; i < n; i++) mp[arr[i]]++;

	int count = 0, element;

	for(auto i: mp) if(i.second > count){element = i.first, count = i.second;}

	cout << "The element is: "<< element << " and the count is: " << count << endl;

	return 0;
}