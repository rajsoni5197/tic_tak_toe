#ifndef Move_H
#define Move_H

class MoveCount
{
private:
    int moveCount;
public:
    MoveCount(int a=1);
    void setMoveCount(int a=1);
    int getMoveCount();
    void decrementMoveCount();
    void incrementMoveCount();
    
};

#endif