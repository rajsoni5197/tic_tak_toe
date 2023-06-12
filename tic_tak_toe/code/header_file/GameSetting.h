#ifndef GameSetting_H
#define GameSetting_H
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\InputOutput.h"
using namespace std;

class GameSetting
{
    private:
     int playerCount;
     int movePerPlayer;
     int boardSize ;
     int round;
    public:
     GameSetting();
     GameSetting(InputOutput& io );
     int getMovePerPlayer();
     int getBoardSize();
     int getPlayerCount();
     int getRounds();
     
};


#endif