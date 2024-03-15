import random

KEY = [" " for _ in range(9)]
PLAYER1 = []
AI = []

POSSIBILITY = [
    [0, 1, 2], [3, 4, 5], [6, 7, 8],
    [0, 3, 6], [1, 4, 7], [2, 5, 8],
    [0, 4, 8], [2, 4, 6]
]

def ai_move():
    empty_cells = [i for i in range(9) if KEY[i] == " "]
    if empty_cells:
        cell = random.choice(empty_cells)
        KEY[cell] = "O"
        AI.append(cell)

def check(player, id):
    for p in POSSIBILITY:
        if all(pos in player for pos in p):
            if id == 1:
                print("Player 1 is the winner")
            else:
                print("AI is the winner")
            return True
    return False

def board():
    print("         |         |         ")
    print(f"   {KEY[0]}     |   {KEY[1]}     |   {KEY[2]}     ")
    print("         |         |         ")
    print("------------------------------")
    print("         |         |         ")
    print(f"   {KEY[3]}     |   {KEY[4]}     |   {KEY[5]}     ")
    print("         |         |         ")
    print("------------------------------")
    print("         |         |         ")
    print(f"   {KEY[6]}     |   {KEY[7]}     |   {KEY[8]}     ")
    print("         |         |         ")

def is_draw():
    return " " not in KEY

def is_game_over():
    return check(PLAYER1, 1) or check(AI, 2) or is_draw()

def player_move():
    while True:
        try:
            num = int(input("Player 1 Enter a number (1-9): "))
            if 1 <= num <= 9:
                if KEY[num - 1] == " ":
                    KEY[num - 1] = "X"
                    PLAYER1.append(num - 1)
                    break
                else:
                    print("That position is already taken. Try again.")
            else:
                print("Invalid input. Please enter a number between 1 and 9.")
        except ValueError:
            print("Invalid input. Please enter a valid number.")

def game_loop():
    while True:
        board()
        player_move()
        if is_game_over():
            break

        if len(PLAYER1) + len(AI) < 9:
            ai_move()
            if is_game_over():
                break
        else:
            print("It's A Draw")
            break

    board()
    print("Game Over")

if __name__ == "__main__":
    game_loop()
