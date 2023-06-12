#include "C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Refree.h"

Refree::Refree() {}

bool Refree::validateMove(int cellId, Board &board)
{
    if((cellId<(board.getSize()*board.getSize())) && board.isEmpty(cellId)) return 1;
    return 0;
  
}
bool Refree::checkFull(Board &board)
{
    int totalCell = board.getCellCount();
    int markedCell = board.getMarkedCount();

    if (markedCell == totalCell)
    {
        return 1;
    }
    return 0;
}
int Refree::rowCheck(Board &board)
{
    float size = board.getSize();
    for (int rFirstCId = 0, i, cellId; rFirstCId <= size * (size - 1); rFirstCId += size)
    {
        
        float first = float(board.getCellSymbol(rFirstCId));
        float sum = 0;
        for (int i = rFirstCId; i < rFirstCId + size; i++)
        {
            sum += float(board.getCellSymbol(i));
        }
        
        if (sum / first == size && first != float(' '))
            return first;
    }
    return -1;
}
int Refree::colCheck(Board &board)
{
    float size = board.getSize();
    for (int cFirstCId = 0; cFirstCId < size; cFirstCId++)
    {
        
        float first = float(board.getCellSymbol(cFirstCId));
        float sum = 0;
        for (int i = cFirstCId; i <= cFirstCId + (size * (size - 1)); i += size)
        {
            sum += float(board.getCellSymbol(i));
        }
      
        if (sum / first == size && first != float(' '))
            return first;
    }
    return -1;
}
int Refree::diagonalCheckLeft(Board &board)
{
    float first = float(board.getCellSymbol(0));
    int size = board.getSize();
    float sum = 0;
    for (int i = 0; i < (size * size); i += size + 1)
    {
        sum += float(board.getCellSymbol(i));
    }
    if (sum / first == size && first != float(' '))
        return first;
    return -1;
}
int Refree::diagonalCheckRight(Board &board)
{
    float size = board.getSize();
    float first = float(board.getCellSymbol(size - 1));
    float sum = 0;
    for (int i = size - 1; i <= size * (size - 1); i += size - 1)
    {
        sum += float(board.getCellSymbol(i));
    }
    if (sum / first == size && first != float(' '))
        return first;
    return -1;
}
int Refree::win(Board &board)
{
    int colCheck = this->colCheck(board),
        rowCheck = this->rowCheck(board),
        diagonalCheckLeft = this->diagonalCheckLeft(board),
        diagonalCheckRight = this->diagonalCheckRight(board);

    if (colCheck != -1)
    {
        return colCheck;
    }
    if (rowCheck != -1)
    {
        return rowCheck;
    }
    if (diagonalCheckRight != -1)
    {
        return diagonalCheckRight;
    }
    if (diagonalCheckLeft != -1)
    {
        return diagonalCheckLeft;
    }

    return -1;
}
void Refree::nextChance(Chance &chance)
{
    chance.next();
}