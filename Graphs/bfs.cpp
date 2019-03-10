#include <bits/stdc++.h>

/* General BFS algorithm:

Initially, set all of visited as false.

Start from a given vertex. Mark it as visited and add all
its neighbours into the queue. And one by one, start
exploring all the neighbours as well. 

This will take time equal to O(V+E).