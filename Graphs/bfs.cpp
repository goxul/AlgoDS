#include <bits/stdc++.h>
using namespace std;

#define pb push_back

vector<bool> visited;
vector< vector<int> > g; // Adjacency List

void edge(int a, int b){ // Inserting B in the adjacency list of A.
	g[a].pb(b);
}

void bfs(int u){
	queue<int> q;

	q.push(u);
	visited[u] = true;

	while(!q.empty()){
		int f = q.front();
		q.pop();
		cout << f << " ";

		for(auto i = g[f].begin(); i != g[f].end(); i++){
			if(visited[*i] == false){
				q.push(*i);
				visited[*i] = true;
			}
		}
	}
}

int main() 
{ 
    int n, e; 
    cin >> n >> e; 
  
    visited.assign(n, false); 
    g.assign(n, vector<int>()); 
  
    int a, b; 
    for (int i = 0; i < e; i++) { 
        cin >> a >> b; 
        edge(a, b); 
    } 
  
    for (int i = 0; i < n; i++) { 
        if (!visited[i]) 
            bfs(i); 
    } 
  
    return 0; 
}

