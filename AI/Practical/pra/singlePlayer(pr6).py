import random

def heuristic(target, guess):
    return abs(target - guess)

def play_game(level):
    random_number = random.randint(1, 100)
    print(random_number)
    print(f"I'm thinking of a number between 1 and 100. Can you guess it?")

    if level == 'easy':
        attempts = 10
    else:
        attempts = 5

    for _ in range(attempts):
        print(f"You have {attempts} attempts remaining to guess the number.")
        guess = int(input("Make a guess: "))
        if guess == random_number:
            print(f"You got it! The answer was {random_number}")
            break
        elif guess > random_number:
            print("Too High")
        else:
            print("Too Low")
        if _ < attempts - 1: 
            print("Guess Again")
        attempts -= 1

    if attempts == 0:
        print("You've run out of guesses, you lose")
        print(f"The answer was {random_number}")

if __name__ == "__main__":
    print("Guess The Number Game")
    print("I'm thinking of a number between 1 and 100")
    level = input("Choose a difficulty. Type 'easy' or 'hard': ").lower()

    if level in ['easy', 'hard']:
        play_game(level)
    else:
        print("Invalid Input. Please choose 'easy' or 'hard'.")
