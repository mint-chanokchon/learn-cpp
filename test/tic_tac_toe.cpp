#include <iostream>
#include <ctime>
#include <conio.h>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    // เมื่อเราส่ง array ไปให้ฟังก์ชัน มันจะเป็น pointer ให้ เราจึงไม่จำเป็นต้องใช้ & เพื่อระบุว่าเป็น pointer
    drawBoard(spaces);

    while (running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
    }
    std::cout << "Thank for playing!" << '\n';

    return 0;
}

void drawBoard(char *spaces)
{
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << " " << spaces[0] << "   |  " << spaces[1] << "  |   " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << " " << spaces[3] << "   |  " << spaces[4] << "  |   " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << " " << spaces[6] << "   |  " << spaces[7] << "  |   " << spaces[8] << "  " << '\n';
    std::cout << "     |     |     " << '\n';
}

void playerMove(char *spaces, char player)
{
    int number;
    do
    {
        std::cout << "Enter a spot to place a marker (1-9).";
        std::cin >> number;
        number--;

        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }

    } while (number <= 0 || number > 9);
}

void computerMove(char *spaces, char computer)
{
    int number;
    srand(time(0));

    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer)
{
    char winner;

    if ((spaces[0] != ' ') && (spaces[0] == spaces[1] && spaces[1] == spaces[2]))
    {
        winner = spaces[0];
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4] && spaces[4] == spaces[5]))
    {
        winner = spaces[3];
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7] && spaces[7] == spaces[8]))
    {
        winner = spaces[6];
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3] && spaces[3] == spaces[6]))
    {
        winner = spaces[0];
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4] && spaces[4] == spaces[7]))
    {
        winner = spaces[1];
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5] && spaces[5] == spaces[8]))
    {
        winner = spaces[2];
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4] && spaces[4] == spaces[8]))
    {
        winner = spaces[0];
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4] && spaces[4] == spaces[6]))
    {
        winner = spaces[2];
    }
    else
    {
        return false;
    }

    winner == player ? std::cout << "You win!\n" : std::cout << "Computer win!\n";

    return true;
}

// ตรวจสอบว่าเสมอกันหรือไม่ หากไม่มีช่องว่างใน array
bool checkTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    std::cout << "It's a tie\n";

    return true;
}