// https://www.geeksforgeeks.org/sort-1-n-swapping-adjacent-elements/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int A[] = { 1, 2, 5, 3, 4, 6 }; 
    bool B[] = { 0, 1, 1, 1, 0 }; 
    int n = sizeof(A) / sizeof(A[0]); 
  
    for(int i = 0; i < n-1; i++){
    	if(B[i]){
    		if(A[i] != i+1) swap(A[i], A[i+1]);
    	}
    }

    for(int i = 0; i < n; i++) if(A[i] != i +1) cout << "False" ;
    return 0;
   
}