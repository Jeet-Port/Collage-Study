import random
import numpy as np

coordinate = np.array([[1, 2], [30, 21], [56, 23], [8, 18], [20, 50], 
                       [3, 4], [11, 6], [6, 7], [15, 20], [10, 9], [12, 12]])

def generate_matrix(coordinate):
    return np.linalg.norm(coordinate[:, np.newaxis] - coordinate, axis=2)

def random_solution(matrix):
    return random.sample(range(len(matrix)), len(matrix))

def path_length(matrix, solution):
    return sum(matrix[solution[i]][solution[i - 1]] for i in range(len(solution)))

def neighbors(matrix, solution):
    best_solution, best_path = solution, path_length(matrix, solution)

    for i in range(len(solution)):
        for j in range(i + 1, len(solution)):
            neighbor = solution.copy()
            neighbor[i], neighbor[j] = neighbor[j], neighbor[i]
            current_path = path_length(matrix, neighbor)
            if current_path < best_path:
                best_solution, best_path = neighbor, current_path

    return best_solution, best_path

def hill_climbing(coordinate):
    matrix = generate_matrix(coordinate)
    current_solution = random_solution(matrix)

    while True:
        neighbor, neighbor_path = neighbors(matrix, current_solution)
        if neighbor_path < path_length(matrix, current_solution):
            current_solution = neighbor
        else:
            break

    return path_length(matrix, current_solution), current_solution

final_solution = hill_climbing(coordinate)
print("The solution is:", final_solution[1])
