#ifndef Symbol_H
#define Symbol_H
using namespace std;


class Symbol
{
private:
    char symbol;

public:
    Symbol(char sym = ' ');
    void setSymbol(char sym);
    char getSymbol();
};
 
#endif