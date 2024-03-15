import os

def clear_screen():
    os.system('clear')

def print_board(board):
    print(f"         |         |         ")
    print(f"   {board[0]}     |   {board[1]}     |   {board[2]}     ")
    print(f"         |         |         ")
    print("------------------------------")
    print(f"         |         |         ")
    print(f"   {board[3]}     |   {board[4]}     |   {board[5]}     ")
    print(f"         |         |         ")
    print("------------------------------")
    print(f"         |         |         ")
    print(f"   {board[6]}     |   {board[7]}     |   {board[8]}     ")
    print(f"         |         |         ")

def check_winner(board, player):
    winning_combinations = [
        [0, 1, 2], [3, 4, 5], [6, 7, 8],
        [0, 3, 6], [1, 4, 7], [2, 5, 8],
        [0, 4, 8], [2, 4, 6]
    ]
    for combo in winning_combinations:
        if all(board[i] == player for i in combo):
            return True
    return False

def is_draw(player1_moves, player2_moves):
    return len(player1_moves) + len(player2_moves) == 9

KEY = [" " for _ in range(9)]
PLAYER1 = []
PLAYER2 = []
game_is_on = True
current_player = "Player1"

clear_screen()
print_board(KEY)

while game_is_on:
    try:
        num = int(input(f"{current_player} Enter a number: ")) - 1
        if KEY[num] == " ":
            if current_player == "Player1":
                KEY[num] = "X"
                PLAYER1.append(num)
                current_player = "Player2"
            else:
                KEY[num] = "O"
                PLAYER2.append(num)
                current_player = "Player1"
            clear_screen()
            print_board(KEY)
            
            if len(PLAYER1) >= 3 and check_winner(KEY, "X"):
                print("Player1 is the winner")
                game_is_on = False
            elif len(PLAYER2) >= 3 and check_winner(KEY, "O"):
                print("Player2 is the winner")
                game_is_on = False
            elif is_draw(PLAYER1, PLAYER2):
                print("It's a draw")
                game_is_on = False
        else:
            print("That position is already taken. Try again.")
    except ValueError:
        print("Please enter a valid number.")
