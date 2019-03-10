#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {20,30,20,20,20};

	int pre[2][5];

	pre[1][4] = 0;

	int max = a[4];

	for(int i = 3; i >= 0; i--){
		pre[1][i] = a[i]+max;
		if(a[i] > max) max = a[i];
	}

	pre[0][4] = 0;
	pre[0][3] = 0;

	int ans = 0;

	for(int i = 2; i >=0; i--){
		pre[0][i] = a[i] * pre[1][i+1];
		if(pre[0][i] > ans) ans = pre[0][i];
	}

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 5; j++){
			cout << pre[i][j] << " ";
		}
		cout << endl;
	}

	cout << "The answer is:" << ans << endl;


	return 0;
}