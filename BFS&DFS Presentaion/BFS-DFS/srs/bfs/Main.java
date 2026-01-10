package bfs;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class Main {
    static void main() {
        // Example 1: Simple graph with 5 nodes
        System.out.println("=== Example: Graph with 5 nodes ===");
        int nodes1 = 5;

        // Creating adjacency list for graph: 0-1-2-3-4 in a line
        ArrayList<ArrayList<Integer>> adj1 = new ArrayList<>();
        for (int i = 0; i < nodes1; i++) {
            adj1.add(new ArrayList<>());
        }

        // Adding edges (undirected graph)
        adj1.get(0).add(1);
        adj1.get(1).add(0);
        adj1.get(1).add(2);
        adj1.get(2).add(1);
        adj1.get(2).add(3);
        adj1.get(3).add(2);
        adj1.get(3).add(4);
        adj1.get(4).add(3);

        ArrayList<Integer> result1 = bfsOfGraph(nodes1, adj1);
        System.out.println("BFS traversal starting from node 0: " + result1);
        System.out.println();

    }

    /**
     * BFS (Breadth-First Search) traversal of a graph
     * BFS explores nodes level by level from the starting node
     * Time Complexity: O(V + E) where V = vertices/nodes, E = edges
     * Space Complexity: O(V) for visited array, queue, and result list
     *
     * @param nodes - number of nodes in the graph (0 to nodes-1)
     * @param adj - adjacency list representation of the graph
     * @return ArrayList containing BFS traversal order
     */
    static ArrayList<Integer> bfsOfGraph(int nodes, ArrayList<ArrayList<Integer>> adj) {
        // Result list to store BFS traversal order
        ArrayList<Integer> bfsResult = new ArrayList<>();

        // Array to track visited nodes (prevents revisiting)
        boolean[] isVisited = new boolean[nodes];

        // Queue for BFS - uses FIFO (First In First Out) principle
        Queue<Integer> queue = new LinkedList<>();

        // Start BFS from node 0 (can be parameterized if needed)
        queue.add(0);
        isVisited[0] = true;

        // Continue BFS until all reachable nodes are visited
        while (!queue.isEmpty()) {
            // Process node from front of queue
            int currentNode = queue.poll();
            bfsResult.add(currentNode);

            // Explore all adjacent nodes (neighbors)
            for (int neighbor : adj.get(currentNode)) {
                // If a neighbor hasn't been visited, mark it and add to queue
                if (!isVisited[neighbor]) {
                    isVisited[neighbor] = true;
                    queue.add(neighbor);
                }
            }
        }
        return bfsResult;
    }
}