// https://www.geeksforgeeks.org/find-a-pair-with-the-given-difference/
// This takes O(nlogn) time and O(1) space
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> a{5, 20, 3, 2, 50, 80};
	int d = 78;
	sort(a.begin(), a.end());

	int i = 0, j = a.size() - 1;

	while(i < j){
		if(a[j] - a[i] == d){
			cout << a[i] << " " << a[j];
			break;
		}
		else if(a[j] - a[i] > d) j--;
		else i++;
	}

	return 0;
}