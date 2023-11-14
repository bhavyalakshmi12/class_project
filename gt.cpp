#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int num_nodes;
  int num_edges;
  int **adjacency_matrix;
} Network;

Network *create_network(int num_nodes, int num_edges) {
  Network *network = malloc(sizeof(Network));
  network->num_nodes = num_nodes;
  network->num_edges = num_edges;
  network->adjacency_matrix = malloc(num_nodes * sizeof(int *));
  for (int i = 0; i < num_nodes; i++) {
    network->adjacency_matrix[i] = malloc(num_nodes * sizeof(int));
    for (int j = 0; j < num_nodes; j++) {
      network->adjacency_matrix[i][j] = 0;
    }
  }
  return network;
}

void add_edge(Network *network, int node1, int node2) {
  network->adjacency_matrix[node1][node2] = 1;
  network->adjacency_matrix[node2][node1] = 1;
}

void print_network(Network *network) {
  for (int i = 0; i < network->num_nodes; i++) {
    for (int j = 0; j < network->num_nodes; j++) {
      printf("%d ", network->adjacency_matrix[i][j]);
    }
    printf("\n");
  }
}

void free_network(Network *network) {
  for (int i = 0; i < network->num_nodes; i++) {
    free(network->adjacency_matrix[i]);
  }
  free(network->adjacency_matrix);
  free(network);
}

int main() {
  // Create a network with 5 nodes and 4 edges.
  Network *network = create_network(5, 4);

  // Add edges to the network.
  add_edge(network, 0, 1);
  add_edge(network, 1, 2);
  add_edge(network, 2, 3);
  add_edge(network, 3, 4);

  // Print the network.
  print_network(network);

  // Free the network.
  free_network(network);

  return 0;
}
