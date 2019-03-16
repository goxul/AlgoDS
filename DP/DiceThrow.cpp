// https://www.geeksforgeeks.org/dice-throw-dp-30/

#include <bits/stdc++.h>
using namespace std;

// Here, every dice has m faces, we have n such dices whose sum needs to be x.
// We'll use a 2-D table to store the result of the subproblems.

int findWays(int m, int n, int x){
	int table[n+1][x+1];
	memset(table,0,sizeof(table));

	// This is the base case, for one dice. If the value is directly possible via the dice, print 1.
	// Else, we have to print zero.
	for(int j = 1; j <= m && j <= x; j++) table[1][j] = 1;

	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= x; j++){
			for(int k = 1; k <= m && k < j; k++){
				table[i][j] += table[i-1][j-k];
			}
		}
	}

	return table[n][x];
}

int main(int argc, char const *argv[])
{
	cout << findWays(6,3,8) << endl;
	return 0;
}