#include <bits/stdc++.h>
using namespace std;

int LCSubStr(char *X, char *Y, int m, int n){

	int LCSRresult[m+1][n+1];
	int result = 0;

	for(int i = 0; i <= m; i++){
		for(int j = 0; j <= n; j++){
			if(i == 0 || j == 0) LCSRresult[i][j] = 0;
			else if(X[i-1] == Y[j-1]){
				LCSRresult[i][j] = 1 + LCSRresult[i-1][j-1];
				result = max(result, LCSRresult[i][j]);
			}
			else LCSRresult[i][j] = 0;
		}
	}
	return result;
}

int main(int argc, char const *argv[])
{
	char X[] = "OldSite:GeeksforGeeks.org"; 
    char Y[] = "NewSite:GeeksQuiz.com"; 
  
    int m = strlen(X); 
    int n = strlen(Y); 
  
    cout << "Length of Longest Common Substring is " 
         << LCSubStr(X, Y, m, n); 
    return 0; 
	return 0;
}