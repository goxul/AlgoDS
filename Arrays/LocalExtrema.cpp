// https://www.geeksforgeeks.org/maximum-number-local-extrema/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = { 1, 0, 2, 1 }; 
    int n = sizeof(a) / sizeof(a[0]); 

    int count = 0;

    for(int i = 1; i < n-1; i++){
    	count += (a[i] > a[i-1] && a[i] > a[i+1]);
    	count += (a[i] < a[i-1] && a[i] < a[i+1]);
    }

    cout << count << endl;
	return 0;
}