import heapq

# Define the goal state
goal_state = (1, 2, 3, 8, 0, 4, 7, 6, 5)

# Define the possible moves
moves = [(1, 0), (-1, 0), (0, 1), (0, -1)]

def heuristic(state):
    # Calculate the Manhattan distance heuristic
    distance = 0
    for i in range(9):
        if state[i] != 0:
            x1, y1 = divmod(i, 3)
            x2, y2 = divmod(goal_state.index(state[i]), 3)
            distance += abs(x1 - x2) + abs(y1 - y2)
    return distance

def is_valid_move(x, y):
    return 0 <= x < 3 and 0 <= y < 3

def get_neighbors(state):
    x, y = divmod(state.index(0), 3)
    neighbors = []

    for dx, dy in moves:
        new_x, new_y = x + dx, y + dy
        if is_valid_move(new_x, new_y):
            new_state = list(state)
            new_index = new_x * 3 + new_y
            new_state[state.index(0)] = state[new_index]
            new_state[new_index] = 0
            neighbors.append(tuple(new_state))

    return neighbors

def a_star(initial_state):
    open_list = [(0 + heuristic(initial_state), 0, initial_state)]
    closed_set = set()
    came_from = {}

    while open_list:
        _, g, current_state = heapq.heappop(open_list)

        if current_state == goal_state:
            path = []
            while current_state in came_from:
                path.insert(0, current_state)
                current_state = came_from[current_state]
            return path

        closed_set.add(current_state)

        for neighbor in get_neighbors(current_state):
            if neighbor in closed_set:
                continue

            tentative_g = g + 1

            if neighbor not in [state for _, _, state in open_list]:
                heapq.heappush(open_list, (tentative_g + heuristic(neighbor), tentative_g, neighbor))
                came_from[neighbor] = current_state

    return None

def print_puzzle(state):
    for i in range(0, 9, 3):
        print(state[i], state[i + 1], state[i + 2])

initial_state = (2, 8, 3, 1, 6, 4, 7, 0, 5)
print("Initial State:")
print_puzzle(initial_state)

solution = a_star(initial_state)

if solution:
    print("\nSolution:")
    for step, state in enumerate(solution):
        print(f"Step {step + 1}:")
        print_puzzle(state)
else:
    print("No solution found.")
