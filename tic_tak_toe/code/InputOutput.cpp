#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\InputOutput.h"

InputOutput::InputOutput()
{

};
void InputOutput::clearScreen()
{
    system("cls");
}
void InputOutput::drawBoard(Board& board)
{
     system("cls");
    int boardSize = board.getSize();
    for(int i = 0 ; i < boardSize ; i++)
    {
        
         cout<<"\t";
         for(int j = 0 ; j<boardSize ; j++)
         {
             cout<<"\t"<<(char)board.getCellSymbol((i*boardSize)+j)<<"\t";
             if(j< boardSize-1) cout<<"|";
         }
         cout<<endl;

    }
}
void InputOutput::outputText(string str){
    cout<<str<<endl;
    
}
string InputOutput::inputText()
{
    string str;
    getline(cin,str);
    return str;
}
int InputOutput::inputValue()
{
    int value;
    cin>>value;
    cin.ignore();  // Discard the newline character
    return value;
}
char InputOutput::inputChar()
{
    
    char value;
    cin>>value;
    cin.ignore();  // Discard the newline character
    return value;
}