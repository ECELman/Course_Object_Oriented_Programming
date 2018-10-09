#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED
#include <string>
using namespace std;

class GradeBook
{
    public:
        GradeBook(string,string);
        void setCourseName(string);
        string getCourseName();
        void displayMessage();
        void set_instructor_name(string);
        string get_instructor_name();
    private:
        string courseName;
        string instructor_name;
};
#endif // GRADEBOOK_H_INCLUDED
