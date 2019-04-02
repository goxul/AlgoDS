#include <bits/stdc++.h>
using namespace std;


int foo(int n) {
int sum = 0; while(n > 0) {
n = n & n-1;
sum++; }
return sum; }

int main(int argc, char const *argv[])
{
	cout << foo(31) << endl;
	return 0;
}