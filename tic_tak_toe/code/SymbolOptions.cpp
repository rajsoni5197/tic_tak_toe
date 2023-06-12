#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\SymbolOptions.h"

SymbolOptions::SymbolOptions()
{
    for(int i = 0 ; i<256 ; i++)
    {
        this->options.insert({i,1});
    }
}
bool SymbolOptions::symbolAvailable(char ch)
{
    return this->options[ch];
}
void SymbolOptions::makeUnAvailable(char ch){
    this->options[ch] = 0;
}