#ifndef GameOver_H
#define GameOver_H
using namespace std;
#include "C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\InputOutput.h"
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Rank.h"
#include <windows.h>
#include<iomanip>


class GameOver
{
private:
    int getTerminalWidth();
public:
    GameOver();
    void show(InputOutput& io,Rank& rank);
};

#endif