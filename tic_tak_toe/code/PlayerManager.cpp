#include "C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\PlayerManager.h"

PlayerManager::PlayerManager(){}
PlayerManager::PlayerManager(int playerCount, InputOutput& io,SymbolOptions& so,GameSetting& gs )
{
    int moveCount = gs.getMovePerPlayer();
    
    io.clearScreen();
    for(int i = 0 ;i < playerCount; i++)
    {
        io.clearScreen();
        io.outputText("\t\tPlayer Info");
        string name ;
        char symbol;
        io.outputText("Enter the Name of Player "+to_string(i+1));
        name = io.inputText();
        
        io.outputText("Give the Symnol of Player "+ name);
        io.outputText("symbol from 0 - 255 ASKI");
        symbol = io.inputChar();
        
       
        while(!so.symbolAvailable(symbol))
        {
            io.outputText("Symbol Taken try other symbol");
            symbol = io.inputChar();
        }
        so.makeUnAvailable(symbol);
        this->players.push_back(Player(name,i,moveCount,symbol)); 
    }
}
Player& PlayerManager::getPlayer( int id)
{
    return this->players[id];
}
int PlayerManager::playerMakeMove(int id)
{
    return this->players[id].makeMove();
}
void PlayerManager::increaseScore(int id)
{
    return this->players[id].incrementScore();
}
vector<Player*> PlayerManager::getPlayers()
{
    vector<Player*> p ;
    for(Player& ele : this->players)
    {
        p.push_back(&ele);
    }
    return p;
}