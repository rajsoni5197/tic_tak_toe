#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Chance.h"

Chance::Chance(){}
Chance::Chance(int n)
{
    for(int i = 0; i<n ;i++ )
    {
        this->chance.push(i);
    }
}
int Chance::getChance()
{
    return this->chance.front();
}
void Chance::next()
{
    int poped = this->chance.front();
    this->chance.pop();
    this->chance.push(poped);
}
void Chance::previous()
{
    for(int i = 0 ; i< this->chance.size()-1;i++)
    {
         this->next();
    }
}