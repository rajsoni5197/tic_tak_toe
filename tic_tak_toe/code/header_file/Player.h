#ifndef Player_H
#define Player_H
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\MoveCount.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Score.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Symbol.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\InputOutput.h"
#include<string>

using namespace std;

class Player
{
private:
   string playerName;
   int playerId;
   MoveCount playerMoveCount;
   Score playerScore;
   Symbol PlayerSymbol;
   InputOutput io;
   
public:
    Player(string name , int id, int moveCount, char symbol);
    string getPlayerName();
    int getPlayerId();
    char getPlayerSymbol();
    int getPlayerScore();
    void incrementMoveCount();
    void incrementScore();
    int getPlayerMoveCount();
    int makeMove();
};



#endif