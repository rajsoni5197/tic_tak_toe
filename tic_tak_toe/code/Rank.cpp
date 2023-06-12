#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Rank.h"
Rank::Rank(){}
Rank::Rank(vector<Player*> players)
{
    this->rank = players;
    this->updateRank();
}
bool Rank::compareSmall(Player* p1,Player* p2)
   {
       return p1->getPlayerScore()< p2->getPlayerScore();
   }
bool Rank::compareBig(Player* p1,Player* p2)
   {
       return p1->getPlayerScore()> p2->getPlayerScore();
   } 
void Rank::updateRank()
{
    sort(this->rank.begin(),this->rank.end(),[this](Player* p1, Player* p2) {
        return compareBig(p1, p2);
    });
}
vector<Player*> Rank::getRank()
{
    vector<Player*> p = this->rank;
    return p;
}