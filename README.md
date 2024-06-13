# Map-Navigator-Dijkstras-Algorithm

## Table Of Contents
1. [Overview](#Overview)
2. [Features](#Features)
3. [Getting Started](#Getting-Started)
    - Prerequisites
    - Installation
4. [Project Structure](#Project-Structure)
5. [Usage](#Usage)
6. [Example Output](#Example-Output)
7. [Contributing](#Contributing)
8. [Acknowledgments](#Acknowledgments)

## Overview
- Simulate a map navigator, similar to Google Maps, that finds the shortest path between metro stations using Dijkstra's algorithm. Efficiently computes the minimum distance from a source node to all other nodes in a weighted graph, representing stations as nodes and distances as edges.
- Determines the shortest distance from a starting station to all other stations in the metro network.
- A priority queue efficiently resulted in a time complexity of O(V2)O(V^2)O(V2) for an adjacency matrix and O(Elog⁡V)O(E \log V)O(ElogV) for a min-heap.


## Features
- **Shortest Path Calculation**: Computes the shortest paths from a source station to all other stations in the network.
- **Graph Representation**: Uses an adjacency matrix to represent the metro stations and the distances between them.
- **Efficient Algorithm**: Implements Dijkstra's Algorithm to ensure optimal pathfinding in graphs with non-negative weights.


## Getting Started


### Prerequisites
- A C compiler (e.g., GCC) installed on your system.

### Installation
1. **Clone the Repository**
    ```bash
    git clone https://github.com/yourusername/Map-Navigator.git
    cd Map-Navigator
    ```

2. **Compile the Program**
    ```bash
    gcc -o Map_Navigator Map_Navigator.c
    ```

3. **Run the Program**
    ```bash
    ./Map_Navigator
    ```

## Project Structure
- **main.c**: Contains the main function and the implementation of Dijkstra's Algorithm.

## Usage
The program initializes a graph representing the metro network and computes the shortest paths from a specified source station to all other stations using Dijkstra's Algorithm. The output displays the shortest distances from the source to each station.

## Example Output
- Here is a sample graph represented as an adjacency matrix:
```
    0   1   2   3   4   5   6   7   8
0 [ 0,  4,  0,  0,  0,  0,  0,  8,  0 ]
1 [ 4,  0,  8,  0,  0,  0,  0, 11,  0 ]
2 [ 0,  8,  0,  7,  0,  4,  0,  0,  2 ]
3 [ 0,  0,  7,  0,  9, 14,  0,  0,  0 ]
4 [ 0,  0,  0,  9,  0, 10,  0,  0,  0 ]
5 [ 0,  0,  4, 14, 10,  0,  2,  0,  0 ]
6 [ 0,  0,  0,  0,  0,  2,  0,  1,  6 ]
7 [ 8, 11,  0,  0,  0,  0,  1,  0,  7 ]
8 [ 0,  0,  2,  0,  0,  0,  6,  7,  0 ]

```

- In the program, we are setting the source vertex to be vertex 0. Here is the expected output:
```
Shortest paths from source vertex 0:
Vertex  Distance from Source
0       0
1       4
2       12
3       19
4       21
5       11
6       9
7       8
8       14

```

## Contributing 
Contributions are welcome! Please submit a pull request or open an issue to discuss your ideas or report bugs.

## Acknowledgments
- Inspired by the need for efficient route planning in navigation systems.
- Special thanks to the open-source community for providing valuable tools and libraries.
