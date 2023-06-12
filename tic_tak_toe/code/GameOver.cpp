#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\GameOver.h"



int GameOver::getTerminalWidth()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    return csbi.dwSize.X;
}
GameOver::GameOver(){}

void GameOver::show(InputOutput& io,Rank& rank)
{
    string go = "Game Over The ranks Are:-";
    int middle = (this->getTerminalWidth() - go.size())/2;
    cout<<setw(middle)<< go<<endl;
    vector<Player*>p = rank.getRank();
    int i = 0;
    for( Player* ele :p)
    {
        cout<<endl<<i++<<" "<<ele->getPlayerName()<<"\t"<<ele->getPlayerScore()<<endl;
    }

}
