#ifndef EXAMINATION_H_INCLUDED
#define EXAMINATION_H_INCLUDED
#include"examPaper.h"
class examination
{
public:
    examination();
    ~examination();
    void setPaperNow(int);
    int getPaperNow();
    void setPaper(int,string,int);
    examPaper getPaper(int);
    void addPaper(string,int);
    void showPaper();
private:
    int paperNow;
    examPaper paper[5];
};

#endif // EXAMINATION_H_INCLUDED
