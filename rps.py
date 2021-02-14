""" Part 2: rps.py

By combining loops and ifs, we can play simple games, such as Rock, Paper, Scissors. 

If you have never played, then directions are here: https://www.youtube.com/watch?v=2dsHuU10udY

Online play for practice: https://www.rock-paper-scissors-game.com/ 

This code will require a while loop, and a series of ifs to determine the winner.

Requirements:

The user can continue playing until they select the "quit" character (your choice)
You will need to create a random number to play for the computer.
The user will enter their choice.
The results of the play will be displayed.
The final results (wins/losses/ties) should be displayed with appropriate explanatory text.
Submit the completed code back to this assignment. """
player1 = int
wins = 0
losses = 0
ties = 0
player2 = int
import random


while player1 != 0:
    print("**********Rock Paper Scissors**********")
    print("Press 1 (followed by 'enter') for Rock")
    print("Press 2 (followed by 'enter') for Paper")
    print("Press 3 (followed by 'enter') for Scissors")
    print("OR\n Press 0 (followed by 'enter') to quit\n\n")
    player1 = int(input("Choose your weapon"))
    player2 = random.randint(1,3)
    if player1 == player2:
        ties = ties +1
        print("***Ties are just as bad as losing. You're a disgrace***")
        print("Wins/Losses/Ties: ",wins,"/",losses,"/",ties,"\n\n")
    elif player1 == 1 and player2 == 2:
        losses = losses +1
        print("***You call that rock, paper, scissors? You lose***")
        print("Wins/Losses/Ties: ",wins,"/",losses,"/",ties,"\n\n")
    elif player1 == 1 and player2 == 3:
        wins = wins +1
        print("***You're the goat of r/p/s. You win!***")
        print("Wins/Losses/Ties: ",wins,"/",losses,"/",ties,"\n\n")
    elif player1 == 2 and player2 == 1:
        wins = wins +1
        print("***You're the greatest to ever play the game. Got yourself a W***")
        print("Wins/Losses/Ties: ",wins,"/",losses,"/",ties,"\n\n")
    elif player1 == 2 and player2 == 3:
        losses = losses +1
        print("***LOSER***")
        print("Wins/Losses/Ties: ",wins,"/",losses,"/",ties,"\n\n")
    elif player1 == 3 and player2 ==1:
        losses = losses +1
        print("***Are you even trying? You lose***")
        print("Wins/Losses/Ties: ",wins,"/",losses,"/",ties,"\n\n")
    elif player1 == 3 and player2 == 2:
        wins = wins +1
        print("***Yeah Playa, Playa You win!***")
        print("Wins/Losses/Ties: ",wins,"/",losses,"/",ties,"\n\n")

print("Thanks for playing")
print("Wins/Losses/Ties: ",wins,"/",losses,"/",ties)

if wins > losses and wins > ties:
    print("You are a winner")
elif losses > wins and losses > ties:
    print("You are a loser")
elif ties > wins and ties > losses:
    print("You are a tier")
else:
    print("Not sure what to call you.. but its not a winner")
