#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED
#include <string>
using namespace std;

class GradeBook
{
   public:
   GradeBook( string );
   void setCourseName( string );
   string getCourseName();
   void displayMessage();
   private:
   string courseName;
};

#endif // GRADEBOOK_H_INCLUDED
