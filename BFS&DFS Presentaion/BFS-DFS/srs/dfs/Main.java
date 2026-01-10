package dfs;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        // Example 1: Simple graph with 6 nodes
        System.out.println("=== Example: Graph with 6 nodes ===");
        int nodes1 = 6;

        // Creating the adjacency list for the graph
        ArrayList<ArrayList<Integer>> adj1 = new ArrayList<>();
        for (int i = 0; i < nodes1; i++) {
            adj1.add(new ArrayList<>());
        }

        // Adding edges (undirected graph)
        // Structure: 0-1-2-3
        //            |
        //            4-5
        adj1.get(0).add(1); adj1.get(0).add(4);
        adj1.get(1).add(0); adj1.get(1).add(2);
        adj1.get(2).add(1); adj1.get(2).add(3);
        adj1.get(3).add(2);
        adj1.get(4).add(0); adj1.get(4).add(5);
        adj1.get(5).add(4);

        ArrayList<Integer> result1 = dfsOfGraph(nodes1, adj1);
        System.out.println("DFS traversal starting from node 0: " + result1);
    }

    /**
     * DFS (Depth-First Search) traversal of a graph
     * DFS explores as far as possible along each branch before backtracking
     * Uses recursion (implicit stack) for traversal
     * Time Complexity: O(V + E) where V = vertices/nodes, E = edges
     * Space Complexity: O(V) for recursion stack, visited array, and result list
     *
     * @param nodes - number of nodes in the graph (0 to nodes-1)
     * @param adj - adjacency list representation of the graph
     * @return ArrayList containing DFS traversal order
     */
    static ArrayList<Integer> dfsOfGraph(int nodes, ArrayList<ArrayList<Integer>> adj) {
        // Array to track visited nodes (prevents cycles/infinite recursion)
        boolean[] visited = new boolean[nodes];

        // Mark the starting node (0) as visited
        visited[0] = true;

        // Result list to store DFS traversal order
        ArrayList<Integer> dfsResult = new ArrayList<>();

        // Start recursive DFS from node 0
        dfs(0, visited, adj, dfsResult);

        return dfsResult;
    }

    /**
     * Recursive helper function for DFS traversal
     *
     * @param node - current node being processed
     * @param visited - array tracking visited nodes
     * @param adj - adjacency list representation of graph
     * @param result - list storing DFS traversal order
     */
    static void dfs(int node, boolean[] visited,
                    ArrayList<ArrayList<Integer>> adj,
                    ArrayList<Integer> result) {
        // Mark the current node as visited and add to result
        visited[node] = true;
        result.add(node);

        // Recursively visit all unvisited neighbors
        // DFS goes deep into one branch before exploring others
        for (int neighbor : adj.get(node)) {
            // Only recurse if a neighbor hasn't been visited
            if (!visited[neighbor]) {
                dfs(neighbor, visited, adj, result);
            }
        }
        // Implicit backtracking when all neighbors are visited
    }
}