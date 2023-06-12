#ifndef Chance_H
#define Chance_H

#include<queue>
using namespace std ;

class Chance
{
    queue<int> chance;
    public:
    Chance();
    Chance(int players);
    int getChance();
    void next();
    void previous();
    
};

#endif