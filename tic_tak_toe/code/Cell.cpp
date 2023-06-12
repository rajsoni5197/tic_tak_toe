#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Cell.h"

Cell::Cell(int id)
{
    this->cellId = id;
    this->CellSymbol = Symbol();
    
}
void Cell::setSymbol(char sym)
{
    this->CellSymbol.setSymbol(sym);
}
char Cell::getSymbol()
{
    return this->CellSymbol.getSymbol();
}