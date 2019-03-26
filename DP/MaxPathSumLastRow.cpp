// https://www.geeksforgeeks.org/maximum-weight-path-ending-element-last-row-matrix/

#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;

int maxCost(int mat[][MAX], int N){
	int dp[N][N];
	memset(dp,0,sizeof(dp));

	dp[0][0] = mat[0][0];

	for(int i = 1; i < N; i++) dp[i][0] = mat[i][0] + dp[i-1][0];

	for(int i = 1; i < N; i++)
		for(int j = 1; j < i && j < N; j++)
			dp[i][j] = mat[i][j] + max(dp[i-1][j-1], dp[i-1][j]);

	int result = 0; 
    for (int i=0; i<N; i++) 
        if (result < dp[N-1][i]) 
            result = dp[N-1][i]; 
  

    return result;
}


int main() 
{ 
    int mat[MAX][MAX] = {  { 4, 1 ,5 ,6 , 1 }, 
        { 2 ,9 ,2 ,11 ,10 }, 
        { 15,1 ,3 ,15, 2 }, 
        { 16, 92, 41,4,3}, 
        { 8, 142, 6, 4, 8 } 
    }; 
    int N = 5; 
    cout << "Maximum Path Sum : "
        << maxCost(mat, N)<<endl; 
    return 0; 
}