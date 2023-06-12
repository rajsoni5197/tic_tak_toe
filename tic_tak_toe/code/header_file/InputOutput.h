#ifndef InputOutput_H
#define InputOutput_H
#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Board.h"
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class InputOutput
{   
    public:
    InputOutput();
    void drawBoard(Board& board);
    void outputText(string str);
    void clearScreen();
    string inputText();
    int inputValue();
    char inputChar();
};

#endif