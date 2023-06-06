#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
std::string showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You choice: " << showChoice(player) << '\n';

    computer = getComputerChoice();
    std::cout << "Computer choice: " << showChoice(computer) << '\n';

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice()
{
    char player;
    std::cout << "Rock paper scissors game!" << '\n';

    do
    {
        std::cout << "Choose one of the following!" << '\n';
        std::cout << "'r' for rock" << '\n';
        std::cout << "'p' for paper" << '\n';
        std::cout << "'s' for scissors" << '\n';
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 'c';
    }

    return 0;
}

std::string showChoice(char choice)
{
    std::string message;

    switch (choice)
    {
    case 'r':
        message = "rock";
        break;
    case 'p':
        message = "paper";
        break;
    case 's':
        message = "scissors";
        break;
    }

    return message;
}

void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "It's a tie\n";
        }
        else if (computer == 'p')
        {
            std::cout << "You lose!";
        }
        else
        {
            std::cout << "You win!";
        }
        break;
    case 'p':
        if (computer == 'p')
        {
            std::cout << "It's a tie\n";
        }
        else if (computer == 's')
        {
            std::cout << "You lose!";
        }
        else
        {
            std::cout << "You win!";
        }
        break;
    case 's':
        if (computer == 's')
        {
            std::cout << "It's a tie\n";
        }
        else if (computer == 'r')
        {
            std::cout << "You lose!";
        }
        else
        {
            std::cout << "You win!";
        }
        break;
    }
}