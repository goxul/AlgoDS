#include <bits/stdc++.h>

using namespace std;

int search(int a[], int key, int left, int right){

	if(right >= left){
		int mid = (left + right)/2;

		if(a[mid] == key) return mid;

		if(a[mid] > key) return search(a,key,left,mid-1);
		else return search(a,key,mid+1,right);
	}

}

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5};
	int key = 2;
	int length = sizeof(a)/sizeof(a[0]);
	int index = search(a,key,0,length-1);

	cout << index;
	return 0;
}