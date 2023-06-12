#ifndef Score_H
#define Score_H

class Score
{
    private:
     int score;
    public:
     Score();
     void incrementScore();
     void decrementScore();
     int getScore();
     void SetScore(int s=0);
};

#endif