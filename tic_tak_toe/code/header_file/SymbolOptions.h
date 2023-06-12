#ifndef SymbolOptions_H
#define SymbolOptions_H
#include<unordered_map>
using namespace std;

class SymbolOptions
{
    private:
     unordered_map<char, int> options;
    public:
     SymbolOptions();
     bool symbolAvailable(char symbol); 
     void makeUnAvailable(char symbol);
};

#endif