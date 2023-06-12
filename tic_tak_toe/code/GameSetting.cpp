#include "C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\GameSetting.h"

GameSetting::GameSetting(){}
GameSetting::GameSetting(InputOutput &io)
{
    io.clearScreen();
    io.outputText(" ");
    io.outputText("\t\tGame Settings");
    io.outputText(" ");
    io.outputText(" ");

    io.outputText("Enter Count of players  (min 2 max 256)");
    int input=io.inputValue();
    while(input> 256 || input< 2)
    {
        io.outputText("sorry cant have player more than 256 or less than 2 try again");
        input = io.inputValue();
    }
    this->playerCount = input;
    io.outputText(" ");
    io.outputText(" ");
    io.outputText("Enter Size of Board (only one side)");
    this->boardSize = io.inputValue();
    while(this->boardSize < 3)
    {
        io.outputText("sorry cant have board Size less than 3 try Again");
        this->boardSize = io.inputValue();
    }
    io.outputText(" ");
    io.outputText(" ");
    io.outputText("Enter no of Round ");
    this->round = io.inputValue();
    while(this->round < 1)
    {
        io.outputText("sorry at Least 1 round try Again");
        this->round = io.inputValue();
    }
    io.outputText(" ");
    io.outputText(" ");
    io.outputText("Enter moves Per Player ");
    this->movePerPlayer = io.inputValue();
     while(this->movePerPlayer < 1)
    {
        io.outputText("sorry at Least 1 move pre player, try Again");
        this->movePerPlayer = io.inputValue();
    }
    io.clearScreen();
}
int GameSetting::getBoardSize()
{
    return this->boardSize;
}
int GameSetting::getPlayerCount()
{
    return this->playerCount;
}
int GameSetting::getRounds()
{
    return this->round;
}
int GameSetting::getMovePerPlayer()
{
    return this->movePerPlayer;
}