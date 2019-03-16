// https://www.geeksforgeeks.org/rearrange-array-arri/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> A = {-1, -1, 6, 1, 9, 3, 2, -1, 4,-1};
	int n = A.size();

	set<int> st(A.begin(), A.end());

	for(int i = 0; i < n; i++){
		if(st.find(i) != st.end() && A[i] >= 0) A[i] = i;
		else A[i] = -1;
	}

	for(int i = 0; i < n; i++) cout << A[i] << " ";

	return 0;
}