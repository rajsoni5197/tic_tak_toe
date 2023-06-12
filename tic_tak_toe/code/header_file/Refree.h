#ifndef Refree_H
#define Refree_H
#include<iostream>
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Chance.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Board.h"
using namespace std;
class Refree
{
    public:
    
    Refree();
    bool validateMove(int cellid,Board& b);
    bool checkFull(Board& b);
    int rowCheck(Board& b);
    int colCheck(Board& b);
    int diagonalCheckLeft(Board& b);
    int diagonalCheckRight(Board& b);

    int win(Board& b);        //-1 if no one won else ansi of who won
    void nextChance(Chance& c);

};

#endif