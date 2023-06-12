#ifndef Rank_H
#define Rank_H
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Player.h"
#include<vector>
#include<algorithm>
using namespace std;
class Rank
{
   private:
   vector<Player*> rank;
   bool compareSmall(Player* p1,Player* p2);
   bool compareBig(Player* p1,Player* p2);
   public:
   Rank();
   Rank(vector<Player*> players);
   void updateRank();
   vector<Player*> getRank();
   
};

#endif