#ifndef Game_H
#define Game_H
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Board.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Chance.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\GameOver.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\GameStart.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\SymbolOptions.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\PlayerManager.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\GameSetting.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\InputOutput.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Refree.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Rank.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Round.h"



using namespace std;

class Game
{   
    private:
    PlayerManager playerManager;
    Board board;
    Round round;
    Rank rank;
    Chance chance;
    Refree refree ;
    SymbolOptions symbolOption;
    GameSetting gameSetting;
    GameStart gameStart ;
    GameOver gameOver ;
    InputOutput io;
    public:
    Game();
    int playeARound();
    void startGame();
    void endGame();

};

#endif