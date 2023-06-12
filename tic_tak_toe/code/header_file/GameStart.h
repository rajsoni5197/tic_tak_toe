#ifndef GameStart_H
#define GameStart_H
using namespace std;

#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\InputOutput.h"
#include<string>
#include <windows.h>
#include<iomanip>

class GameStart
{
    private:
     void delay(int a );
     void print(string a);
     int getTerminalWidth();
    public:
     GameStart();
     void show(InputOutput& io);
    
};

#endif