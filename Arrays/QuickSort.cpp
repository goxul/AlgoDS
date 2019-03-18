#include <bits/stdc++.h>
using namespace std;
static int i = 1;


void QuickSort(int a[], int l, int r){
	// We are choosing the first element as the pivot
	i++;
	if(r - l <= 1) return;

	int yellow = l+1;
	int green;

	for(green = l+1; green < r; green++){
		if(a[green] <= a[l]){
			swap(a[yellow],a[green]);
			yellow++;
		}
	}

	cout << yellow << " " << green << " " << endl;


	swap(a[l],a[yellow-1]);

	QuickSort(a,l,yellow); 
	QuickSort(a,yellow+1,r);
}

int main(int argc, char const *argv[])
{
	int a[] ={10,9,8,7,6,5,4,3,2,1};
	int n = sizeof(a)/sizeof(a[0]);
	QuickSort(a,0,n);
	for(int i = 0; i <n; i++) cout << a[i] << " ";
	cout << endl;
	cout << i << endl;
	return 0;
}