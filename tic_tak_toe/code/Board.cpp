#include "C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Board.h"
#include<iostream>
Board::Board(){}
Board::Board(int size)
{
    this->size = size;
    for (int i = 0; i < (size * size); i++)
    {

        this->board.push_back(Cell(i));
    }
}
void Board::clearBoard(){
    for(Cell& ele : this->board)
    {
        ele.setSymbol(' ');
    }
    this->markedCoutn = 0;
}
int Board::getSize()
{
    return this->size;
}
int Board::getMarkedCount()
{
    return this->markedCoutn;
}
int Board::getCellCount()
{
    return (this->size) * (this->size);
}
void Board::markCell(int id, char sym)
{  
    this->board[id].setSymbol(sym);
    this->markedCoutn++;

    
}
bool Board::isEmpty(int id)
{
    if (this->board[id].getSymbol() != ' ')
        return 0;
    return 1;
}
Cell Board::getCell(int id)
{
    return board[id];
}
char Board::getCellSymbol(int id)
{
    return board[id].getSymbol();
}
