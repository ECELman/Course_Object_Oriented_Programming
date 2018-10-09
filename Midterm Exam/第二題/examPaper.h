#ifndef EXAMPAPER_H_INCLUDED
#define EXAMPAPER_H_INCLUDED
#include<string>
using namespace std;
class examPaper
{
public:
    examPaper();
    ~examPaper();
    void setScore(int);
    int getScore();
    void setOwner(string);
    string getOwner();
private:
    int score;
    string owner;
};

#endif // EXAMPAPER_H_INCLUDED
