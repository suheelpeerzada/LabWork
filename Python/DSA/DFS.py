graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}
start_node = 'A'
visited = []
def dfs(start_node):
    if start_node not in visited:
        visited.append(start_node)
        for val in graph[start_node]:
            dfs(val)
    return visited
print(len(graph))
print('Final Visited:',dfs(start_node))