#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {7,8,9,10,1,2,3,4,5,6};

	int i = 0, count = 0;

	int n = sizeof(a)/sizeof(a[0]);

	while(a[i+1] > a[i]){
		count++;
		i++;
	}

	if(count == n) cout << 0;
	else cout << count+1;

	return 0;
}