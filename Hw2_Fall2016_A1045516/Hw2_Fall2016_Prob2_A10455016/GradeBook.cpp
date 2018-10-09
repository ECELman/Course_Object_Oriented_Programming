#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string course_name,string instructor_name)
{
    setCourseName(course_name);
    set_instructor_name(instructor_name);
}

void GradeBook::setCourseName(string name)
{
    courseName = name;
}
string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::displayMessage()
{
    cout << endl << "Welcome to the grade book for\n" << getCourseName()
    << "!" << endl<< "This course is presented by : "<< get_instructor_name()<<endl;
}

string GradeBook::get_instructor_name()
{
    return instructor_name;
}
void GradeBook::set_instructor_name(string name)
{
    instructor_name=name;
}

int main()
{
    GradeBook gradeBook1("CS101 Introduction to C++ Programming","John");
    GradeBook gradeBook2("CS102 Data Structures in C++","Eric");
    gradeBook1.displayMessage();
    gradeBook2.displayMessage();
    return 0;
}
