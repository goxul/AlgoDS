// https://www.geeksforgeeks.org/leaders-in-an-array/
// We scan from the right and keep storing the maximum as we move towards the left.

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {16,17,4,3,5,2};
	int n = sizeof(a)/sizeof(a[0]);
	int result[n];

	result[0] = a[n-1];

	int j = n-2, k = 1, count = 0;
	int max = a[n-1];

	while(j >= 0){
		if(a[j] > max){
			max = a[j];
			result[k++] = a[j];
			count++;
		}
		j--;
	}

	for(int i = 0; i <= count; i++) cout << result[i] << " ";
	return 0;
}