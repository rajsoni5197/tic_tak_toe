#include"header_file/Symbol.h"
using namespace std;

Symbol::Symbol(char sym )
{
    this->symbol=sym;
}
void Symbol::setSymbol(char sym)
{
    this->symbol = sym ;
}
char Symbol::getSymbol()
{
    return this->symbol;
}