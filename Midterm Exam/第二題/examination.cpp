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
    if(getPaperNow()>=5) cout<<"�Ҩ��������F!�o�i�Ҩ��O�����Ӫ�?"<<endl;
    else
    {
        setPaper(paperNow,paper_owner,paper_score);
        paperNow++;
        setPaperNow(paperNow);
        cout<<"�Ҩ��Ҧ��H "<<paper_owner<<" ��Ҩ��F"<<endl;
    }
}
void examination::showPaper()
{
    cout<<"���Z��:"<<endl;
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
