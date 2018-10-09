#include"examination.h"
#include<iostream>
int main()
{
    examination midExam;
    char *paperOwners[]={"賽佛勒斯","天狼星","雷木思","詹姆","莉莉"};
    int paperScores[]={88,65,60,70,93};
    for(int i=0;i<5;i++)
    {
        midExam.addPaper(paperOwners[i],paperScores[i]);
    }
    midExam.showPaper();
    return 0;
}
