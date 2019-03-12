// https://www.geeksforgeeks.org/rotate-a-matrix-by-90-degree-in-clockwise-direction-without-using-any-extra-space/

#include <bits/stdc++.h>
using namespace std;

#define N 4

void rotate90Clockwise(int arr[N][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(i != j){
				int temp = arr[i][j];
				arr[i][j] = arr[j][i];
				arr[j][i] = temp;
			}
		}
	}

	for(int i = 0; i < N; i++){
		int left = 0, right = N-1;
		while(left < right) swap(arr[i][left++], arr[i][right--]);
	}
}

void printMatrix(int arr[N][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}



int main(int argc, char const *argv[])
{
	int arr[N][N] = { { 1, 2, 3, 4 }, 
                      { 5, 6, 7, 8 }, 
                      { 9, 10, 11, 12 }, 
                      { 13, 14, 15, 16 } }; 
    rotate90Clockwise(arr); 
    printMatrix(arr); 
    return 0;
}