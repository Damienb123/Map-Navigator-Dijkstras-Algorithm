#ifndef GRAPH_H
#define GRAPH_H

#include <stdbool.h> // Include stdbool.h for bool type

#define V 9 // Number of vertices in the graph

// A utility function to find the vertex with minimum distance value
int minDistance(int dist[], bool sptSet[]);

// A utility function to print the constructed distance array
void printSolution(int dist[], int n);

// Function that implements Dijkstra's single source shortest path algorithm
void dijkstra(int graph[V][V], int src);

#endif
