#include <iostream>

bool check_win(char board[3][3])
{
    // check rows
    if (board[0][0] == board[0][1] && board[0][1] == board[0][2])
    {
        return true;
    }
    else if (board[1][0] == board[1][1] && board[1][1] == board[1][2])
    {
        return true;
    }
    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
    {
        return true;
    }
    // check colums
    else if (board[0][0] == board[1][0] && board[1][0] == board[2][0])
    {
        return true;
    }
    else if (board[0][1] == board[1][1] && board[1][1] == board[2][1])
    {
        return true;
    }
    else if (board[0][2] == board[1][2] && board[1][2] == board[2][2])
    {
        return true;
    }
    // diagnols
    else if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return true;
    }
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return true;
    }
    else
    {
        return false;
    }
}
void draw_board(char board[3][3])
{
    std::cout << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << std::endl;

        if (i < 2)
        {
            std::cout << "---|---|---" << std::endl;
        }
    }
    std::cout << std::endl;
}

int main()
{
    char currentplayer = 'X';
    char myboard[3][3] = {{'1', '2', '3'},
                          {'4', '5', '6'},
                          {'7', '8', '9'}};
    bool game_is_won = false;
    draw_board(myboard);
    for (int turn = 0; turn < 9; turn++)
    {
        std::cout << "Player " << currentplayer << " enter your move:" << std::endl;
        int input;
        std::cin >> input;
        switch (input)
        {
        case 1:
            myboard[0][0] = currentplayer;
            break;
        case 2:
            myboard[0][1] = currentplayer;
            break;
        case 3:
            myboard[0][2] = currentplayer;
            break;
        case 4:
            myboard[1][0] = currentplayer;
            break;
        case 5:
            myboard[1][1] = currentplayer;
            break;
        case 6:
            myboard[1][2] = currentplayer;
            break;
        case 7:
            myboard[2][0] = currentplayer;
            break;
        case 8:
            myboard[2][1] = currentplayer;
            break;
        case 9:
            myboard[2][2] = currentplayer;
            break;
        default:
            std::cout << "invalid move |!plz enter a number" << std::endl;
            break;
        }
        draw_board(myboard);
        if (check_win(myboard))
        {
            std::cout << "player " << currentplayer << " has won" << std::endl;
            game_is_won = true;
            break;
        }

        if (currentplayer == 'X')
        {
            currentplayer = 'O';
        }
        else
        {
            currentplayer = 'X';
        }
    }
     if (!game_is_won)
        {
            std::cout << "The game is a draw!" << std::endl;
        }

    return 0;
}