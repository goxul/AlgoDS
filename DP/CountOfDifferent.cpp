// https://www.geeksforgeeks.org/count-ofdifferent-ways-express-n-sum-1-3-4/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n = 5;
	int dp[n+1];

	dp[0] = dp[1] = dp[2] = 1;
	dp[3] = 2;

	for(int i = 4; i <= n; i++) dp[i] = dp[i-1] + dp[i-3] + dp[i-4];

	cout << dp[n] << endl;

	return 0;
}