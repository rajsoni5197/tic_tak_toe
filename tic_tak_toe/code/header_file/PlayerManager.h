#ifndef PlayerManager_H
#define PlayerManager_H
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\InputOutput.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Player.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\GameSetting.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\SymbolOptions.h"
using namespace std;
class PlayerManager
{
    private:
    int playerCount;
    vector<Player>players;
    public:
    PlayerManager();
    PlayerManager(int pCount,InputOutput& io,SymbolOptions& so,GameSetting& gs);
    Player& getPlayer(int id);
    int playerMakeMove(int pId );
    void increaseScore(int pId);
    vector<Player*> getPlayers();
};

#endif