#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Player.h"

Player::Player(string name, int id, int moveCount,char sym)
{
    this->playerName= name;
    this->playerId = id;
    this->playerMoveCount = MoveCount(moveCount);
    this->playerScore = Score();
    this->PlayerSymbol= Symbol(sym);
    this->io = InputOutput();
}
int Player::getPlayerMoveCount(){
    return this->playerMoveCount.getMoveCount();
}
string Player::getPlayerName()
{
    return this->playerName;
}
int Player::getPlayerId(){
    return this->playerId;
}
char Player::getPlayerSymbol()
{
    return this->PlayerSymbol.getSymbol();
}
int Player::getPlayerScore()
{
    return this->playerScore.getScore();
}
void Player::incrementScore()
{
    this->playerScore.incrementScore();
}
void Player::incrementMoveCount(){
    this->playerMoveCount.incrementMoveCount();
}
int Player::makeMove()
{
    return this->io.inputValue();
}