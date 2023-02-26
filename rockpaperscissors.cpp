#include <iostream>

std::string choice(int choice, std::string play);

int main() {
    int player;
    int computer;
    std::string playerPlay;
    std::string computerPlay;

    std::cout << "Welcome to Rock Paper Scissors! \n";
    std::cout << "1 is for Rock, 2 is for Paper, 3 is for Scissors. \n";
    std::cout << "What is your choice? \n";
    std::cin >> player;

    srand(time(NULL));
    computer = (rand() % 3) + 1;
    playerPlay = choice(player, playerPlay);
    computerPlay = choice(computer, computerPlay);

    std::cout << "You played " << playerPlay << "! \n";
    std::cout << "Computer played " << computerPlay << "! \n";

    if ((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2)) 
    {
        std::cout << "Player wins!";
    } 
    else if ((computer == 1 && player == 3) || (computer == 2 && player == 1) || (computer == 3 && player == 2)) 
    {
        std::cout << "Computer wins!";
    }
    else 
    {
        std::cout << "It's a tie!";
    }
}

std::string choice(int choice, std::string play) {
    switch(choice) {
        case 1:
            play = "Rock";
            break;
        case 2:
            play = "Paper";
            break;
        case 3:
            play = "Scissors";
            break;
        default:
            std::cout << "Invalid choice!";
    }
    return play;
}
