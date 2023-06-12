#include "header_file/MoveCount.h"

MoveCount::MoveCount(int count)
{
   this->moveCount = count;
}
void MoveCount::setMoveCount(int count)
{
    this->moveCount = count;
}
void MoveCount::incrementMoveCount()
{
    this->moveCount++;
}
void MoveCount::decrementMoveCount()
{
    if(this->moveCount>0)
        this->moveCount--;
}
int MoveCount::getMoveCount(){
    return this->moveCount;
}