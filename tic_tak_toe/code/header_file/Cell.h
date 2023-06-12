#ifndef Cell_H
#define Cell_H

#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Symbol.h"
using namespace std;
class Cell
{
    private:
        int cellId;
        Symbol CellSymbol;
    public:
        Cell(int id);
        void setSymbol(char sym);
        char getSymbol();

};

#endif