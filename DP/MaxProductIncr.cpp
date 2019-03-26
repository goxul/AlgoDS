// This is a variant of the the LIS problem: just the conditions are different.


#include <bits/stdc++.h>
using namespace std;

#define ll long long int


ll lis(ll arr[], ll n){
	vector<ll> mpis(n);

	for(int i = 0; i < n; i++) mpis[i] = arr[i];

	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if(arr[i] > arr[j] && mpis[i] < mpis[j]*arr[i])
				mpis[i] = mpis[j]*arr[i];
		}
	}
	ll max = 0;
	for(int i = 0; i < n; i++) if(mpis[i] > max) max = mpis[i];

	return max;
}




int main() 
{ 
    ll arr[] = { -3, -100, -4, -5, -150, -6 }; 
    ll n = sizeof(arr) / sizeof(arr[0]); 
    printf("%lld", lis(arr, n)); 
    return 0; 
} 