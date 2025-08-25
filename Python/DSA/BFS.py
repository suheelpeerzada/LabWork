from collections import deque

start_node = 'A'
q = deque([start_node])
graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}

visited = []

while(q):
    node = q.popleft()
    if node not in visited:
        visited.append(node)
    for val in graph[node]:
        if val not in visited:
            q.append(val)

print(visited)