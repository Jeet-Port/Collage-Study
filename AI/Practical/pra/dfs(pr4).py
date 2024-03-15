class Graph:
    def __init__(self):
        self.graph = {}

    def add_edge(self, vertex, edges):
        if vertex not in self.graph:
            self.graph[vertex] = []
        self.graph[vertex].extend(edges)

    def dfs(self, start_vertex):
        visited = set()
        stack = [start_vertex]

        while stack:
            vertex = stack.pop()
            if vertex not in visited:
                print(vertex, end=' ')
                visited.add(vertex)
                stack.extend([neighbor for neighbor in self.graph.get(vertex, []) if neighbor not in visited])

if __name__ == "__main__":
    graph = Graph()
    
    # Adding edges to the graph
    graph.add_edge('A', ['B', 'C'])
    graph.add_edge('B', ['A', 'D', 'E'])
    graph.add_edge('C', ['A', 'F'])
    graph.add_edge('D', ['B'])
    graph.add_edge('E', ['B', 'F'])
    graph.add_edge('F', ['C', 'E'])

    print("Depth-First Search (DFS) starting from vertex 'A':\n")
    graph.dfs('A')
    print('\n')
