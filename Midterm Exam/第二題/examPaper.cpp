#include"examPaper.h"
examPaper::examPaper()
{
    setScore(0);
    setOwner("nobody");
}
examPaper::~examPaper(){}
void examPaper::setScore(int paper_score)
{
    score=paper_score;
}
int examPaper::getScore()
{
    return score;
}
void examPaper::setOwner(string paper_owner)
{
    owner=paper_owner;
}
string examPaper::getOwner()
{
    return owner;
}
