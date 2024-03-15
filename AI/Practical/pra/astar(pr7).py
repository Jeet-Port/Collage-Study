import heapq

def astar(maze, start, end):
    def heuristic(node):
        return abs(node[0] - end[0]) + abs(node[1] - end[1])

    open_set = [(0, start)]
    came_from = {}
    g_score = {position: float('inf') for row in maze for position in row}
    g_score[start] = 0

    while open_set:
        _, current = heapq.heappop(open_set)

        if current == end:
            path = []
            while current in came_from:
                path.append(current)
                current = came_from[current]
            path.append(start)
            return path[::-1]

        for neighbor in [(current[0] - 1, current[1]), 
                         (current[0] + 1, current[1]), 
                         (current[0], current[1] - 1), 
                         (current[0], current[1] + 1)]:
            if 0 <= neighbor[0] < len(maze) and 0 <= neighbor[1] < len(maze[0]) and maze[neighbor[0]][neighbor[1]] == 0:
                tentative_g_score = g_score[current] + 1
                if tentative_g_score < g_score.get(neighbor, float('inf')):
                    came_from[neighbor] = current
                    g_score[neighbor] = tentative_g_score
                    f_score = tentative_g_score + heuristic(neighbor)
                    heapq.heappush(open_set, (f_score, neighbor))

    return None

# Example usage:
maze = [
    [0, 1, 0, 0, 0, 0],
    [0, 1, 0, 1, 1, 0],
    [0, 0, 0, 1, 0, 0],
    [0, 1, 1, 1, 0, 1],
    [0, 0, 0, 0, 0, 0],
]

start = (0, 0)
end = (4, 5)

path = astar(maze, start, end)

if path:
    print("Path found:")
    for p in path:
        print(p)
else:
    print("No path found")