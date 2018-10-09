#include"examination.h"
#include<iostream>
using namespace std;
examination::examination()
{
    paperNow=0;
}
examination::~examination(){}
void examination::setPaperNow(int now_paper_num)
{
    paperNow=now_paper_num;
}
int examination::getPaperNow()
{
    return paperNow;
}
void examination::setPaper(int paper_now,string paper_owner,int paper_score)
{
    paper[paper_now].setScore(paper_score);
    paper[paper_now].setOwner(paper_owner);
}
examPaper examination::getPaper(int paper_now)
{
    return paper[paper_now];
}
void examination::addPaper(string paper_owner,int paper_score)
{
    if(getPaperNow()>=5) cout<<"考卷都收齊了!這張考卷是打哪來的?"<<endl;
    else
    {
        setPaper(paperNow,paper_owner,paper_score);
        paperNow++;
        setPaperNow(paperNow);
        cout<<"考卷所有人 "<<paper_owner<<" 交考卷了"<<endl;
    }
}
void examination::showPaper()
{
    cout<<"成績單:"<<endl;
    examPaper temp,temp2;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(paper[j].getScore()<paper[j+1].getScore())
            {
                temp=paper[j];
                paper[j]=paper[j+1];
                paper[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        temp2=getPaper(i);
        cout<<temp2.getScore()<<" -- "<<temp2.getOwner()<<endl;
    }
}
