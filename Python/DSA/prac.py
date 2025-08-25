from collections import deque
graph = {
    'A': ['D', 'B', 'C'],
    'B': ['F', 'E'],
    'C': ['K', 'G'],
    'D': ['I', 'H'],
    'E': [],
    'F': ['J'],
    'G': [],
    'H': [],
    'I': [],
    'J': [],
    'K': []
}

start_node = 'A'
q = deque([start_node])
vis1 = [] #for dfs
vis2 = [] #for bfs
def dfs(start_node):
    if start_node not in vis1:
        vis1.append(start_node)
    for val in graph[start_node]:
        if val not in vis1:
            dfs(val)
    return vis1

def bfs():
    while(q):
        node = q.popleft()
        if node not in vis2:
            vis2.append(node)
        for val in graph[node]:
            if val not in vis2:
                q.append(val)
    return vis2

print(dfs(start_node))
print(bfs())