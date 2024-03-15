def is_valid(state):
    m, c, b = state
    if m < 0 or c < 0 or m > 3 or c > 3 or (m < c and m > 0) or (m > c and m < 3):
        return False
    return True

def move(state, action):
    m, c, b = state
    if b == 1:
        return (m - action[0], c - action[1], 0)
    else:
        return (m + action[0], c + action[1], 1)

def is_goal(state):
    return state == (0, 0, 0)

def dfs(state, visited, path):
    if state in visited:
        return None

    visited.add(state)
    path.append(state)

    if is_goal(state):
        return path

    for action in [(1, 0), (2, 0), (0, 1), (0, 2), (1, 1)]:
        new_state = move(state, action)
        if is_valid(new_state):
            result = dfs(new_state, visited, path)
            if result:
                return result

    path.pop()
    return None

def print_state(state):
    m, c, b = state
    side = "left" if b == 1 else "right"
    print(f"{m} Missionaries, {c} Cannibals, Boat is on the {side} side.")

def solve_missionaries_cannibals():
    initial_state = (3, 3, 1)
    visited = set()
    path = []

    solution = dfs(initial_state, visited, path)

    if solution:
        for i, state in enumerate(solution):
            print(f"Step {i}:")
            print_state(state)
            if i < len(solution) - 1:
                print("-> Move the boat.")
    else:
        print("No solution found.")

if __name__ == "__main__":
    solve_missionaries_cannibals()