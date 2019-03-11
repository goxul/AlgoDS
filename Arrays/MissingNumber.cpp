// https://www.geeksforgeeks.org/find-the-missing-number/

// In this problem, edge cases are very important.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {1,2,4,5,6};
	int s1 = a[0], s2 = 1;
	int n = sizeof(a)/sizeof(a[0]);

	for(int i = 1; i < n; i++) s1 = s1^a[i];
	for(int i = 2; i <= n+1; i++) s2 =  s2^i;

	int result = s1^s2;

	cout << result << endl;

	return 0;
}