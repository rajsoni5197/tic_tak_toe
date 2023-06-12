#include "header_file/Score.h"
Score::Score()
{
    this->score = 0;
}
void Score::SetScore(int score)
{
    this->score = score;
}
int Score::getScore()
{
    return this->score;
}
void Score::incrementScore()
{
    this->score++;
}
void Score::decrementScore()
{
    if(this->score >0)
    this->score--;
}
