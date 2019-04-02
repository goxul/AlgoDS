#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

	string input = "Hello Worldddd";
	stringstream ss(input);
	string token;
	vector<string> result;

	while(getline(ss, token, ' ')) {
	    result.push_back(token);
	}

	return result[result.size() -1 ].length();

}