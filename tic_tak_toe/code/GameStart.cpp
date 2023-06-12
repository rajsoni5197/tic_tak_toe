#include "C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\GameStart.h"

int GameStart::getTerminalWidth()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    return csbi.dwSize.X;
}
void GameStart::delay(int a)
{
    for (int i = 0; i <= a; i++)
    {
    }
}
void GameStart::print(string str)
{
    for(auto ele :str)
    {
        cout<<ele;
        delay((1e8*0.3));
    }
    cout<<endl;
}
GameStart::GameStart(){}
void GameStart::show(InputOutput& io)
{
    io.clearScreen();
    string GameName = "TIC_TAK_TOE";
    string next = "press c to continue e to exit";
    int middle = (this->getTerminalWidth() - GameName.size())/2;
    cout<<setw(middle)<<" ";
    this->print(GameName);
    io.outputText(" ");
    io.outputText(" ");
    middle = (this->getTerminalWidth() - next.size())/2;
    io.outputText(" ");
    io.outputText(" ");
    cout<<setw(middle)<<" ";
    this->print(next);
    cout<<setw(middle)<<" ";

    char input = io.inputChar();
    if(input == 'e') exit(0);
}