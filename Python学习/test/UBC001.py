import sys
from collections import defaultdict, deque

def solve(n, edges):
    graph = defaultdict(list)
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)
    
    color = [-1] * (n + 1)
    queue = deque([1])
    color[1] = 0  # 根节点染蓝色
    
    order = []
    
    while queue:
        node = queue.popleft()
        order.append(node)
        for neighbor in graph[node]:
            if color[neighbor] == -1:
                color[neighbor] = (color[node] + 1) % 2
                queue.append(neighbor)
    
    # Check if the path length is odd for all transitions
    for i in range(n - 1):
        if abs(color[order[i]] - color[order[i+1]]) != 1:
            return [-1]
    
    return order

def main():
    input_lines = sys.stdin.read().strip().split('\n')
    t = int(input_lines[0])
    line_index = 1
    results = []
    
    for _ in range(t):
        n = int(input_lines[line_index].strip())
        edges = [tuple(map(int, input_lines[line_index + i + 1].split())) for i in range(n - 1)]
        line_index += n
        result = solve(n, edges)
        results.append(' '.join(map(str, result)) if len(result) == n else '-1')
    
    for res in results:
        print(res)

if __name__ == "__main__":
    main()