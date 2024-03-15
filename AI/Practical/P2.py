from collections import deque

# Function to represent the state of the jugs
class State:
    def __init__(self, jug1, jug2):
        self.jug1 = jug1
        self.jug2 = jug2

    def __eq__(self, other):
        return self.jug1 == other.jug1 and self.jug2 == other.jug2

    def __hash__(self):
        return hash((self.jug1, self.jug2))

    def __str__(self):
        return f"({self.jug1}, {self.jug2})"

# Function to perform BFS on the Water Jug problem
def bfs_water_jug_problem(capacity_jug1, capacity_jug2, target):
    visited = set()
    queue = deque()
    initial_state = State(0, 0)

    queue.append(initial_state)

    while queue:
        current_state = queue.popleft()

        if current_state == target:
            return "Solution found:", current_state

        visited.add(current_state)

        # Fill jug1
        if current_state.jug1 < capacity_jug1:
            next_state = State(capacity_jug1, current_state.jug2)
            if next_state not in visited:
                queue.append(next_state)

        # Fill jug2
        if current_state.jug2 < capacity_jug2:
            next_state = State(current_state.jug1, capacity_jug2)
            if next_state not in visited:
                queue.append(next_state)

        # Empty jug1
        if current_state.jug1 > 0:
            next_state = State(0, current_state.jug2)
            if next_state not in visited:
                queue.append(next_state)

        # Empty jug2
        if current_state.jug2 > 0:
            next_state = State(current_state.jug1, 0)
            if next_state not in visited:
                queue.append(next_state)

        # Pour from jug1 to jug2
        if current_state.jug1 > 0 and current_state.jug2 < capacity_jug2:
            transfer_amount = min(current_state.jug1, capacity_jug2 - current_state.jug2)
            next_state = State(current_state.jug1 - transfer_amount, current_state.jug2 + transfer_amount)
            if next_state not in visited:
                queue.append(next_state)

        # Pour from jug2 to jug1
        if current_state.jug2 > 0 and current_state.jug1 < capacity_jug1:
            transfer_amount = min(current_state.jug2, capacity_jug1 - current_state.jug1)
            next_state = State(current_state.jug1 + transfer_amount, current_state.jug2 - transfer_amount)
            if next_state not in visited:
                queue.append(next_state)

    return "No solution found."

# Example usage:
capacity_jug1 = 4
capacity_jug2 = 3
target_state = State(3, 0)

result = bfs_water_jug_problem(capacity_jug1, capacity_jug2, target_state)
for line in result:
    print(line)
