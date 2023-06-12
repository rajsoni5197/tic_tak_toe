#ifndef Board_H
#define Board_H
#include<vector>
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Cell.h"
using namespace std;

class Board
{
    private:
        int markedCoutn =0;
        int size ;
        vector<Cell> board;
    public:
    Board();
    Board(int n);
    int getSize();
    Cell getCell(int id);
    char getCellSymbol(int id);
    bool isEmpty(int id);
    int getMarkedCount();
    int getCellCount();
    void markCell(int id,char sym);
    void clearBoard();
};


#endif