// Using adjacency matrix.


#include <bits/stdc++.h>
using namespace std;

#define V 9

int minDistance(int dist[], bool visited[]){
	int min = INT_MAX, min_index;

	for(int v = 0; v < V; v++){
		if(!visited[v] && dist[v] <= min) // Finding any vertex which has a value less than the minimum.
			min = dist[v], min_index = v;
	}

	return min_index; // We are returning the vertex which has the minimum distance 
}

int printSolution(int dist[], int n){
	printf("Vertex   Distance from Source\n"); 
   for (int i = 0; i < V; i++) 
      printf("%d \t\t %d\n", i, dist[i]); 
}

void dijkstra(int graph[V][V], int src){
	int dist[V];
	bool visited[V];

	for(int i = 0; i < V; i++) visited[i] = false, dist[i] = INT_MAX; // Setting base conditions
 
	dist[src] = 0; 

	for(int count = 0; count < V-1; count++){
		int u = minDistance(dist,visited); // Finding the vertex with the minimum distance from a given vertex. 

		visited[u] = true; // In the first iteration, always the source is visited.

		// Main loop for Dijkstra

		for(int v = 0; v < V; v++){
			if(!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
		}
	}

	printSolution(dist,V);
}

int main() 
{ 
   
   int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0}, 
                      {4, 0, 8, 0, 0, 0, 0, 11, 0}, 
                      {0, 8, 0, 7, 0, 4, 0, 0, 2}, 
                      {0, 0, 7, 0, 9, 14, 0, 0, 0}, 
                      {0, 0, 0, 9, 0, 10, 0, 0, 0}, 
                      {0, 0, 4, 14, 10, 0, 2, 0, 0}, 
                      {0, 0, 0, 0, 0, 2, 0, 1, 6}, 
                      {8, 11, 0, 0, 0, 0, 1, 0, 7}, 
                      {0, 0, 2, 0, 0, 0, 6, 7, 0} 
                     }; 
   
    dijkstra(graph, 0); 
   
    return 0; 
} 