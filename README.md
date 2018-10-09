# Course_Object_Oriented_Programming

課堂作業, 考試, 期末專題

# Hw1_Fall2016_A1045516

**Homework set \#1**

**CSB021: Object Oriented Programming**

**(Upload your homework to E-learning by Nov./3/2016. Please consult your TA for
any questions).**

**Problem 1: Compare the difference between using “inline” and regular function
calls. Follow the steps below.**

>   **Step 1: Get the sample code "no_inline_test.zip" in E-learning.**

>   **Then decompress it and you shall see no_inline_test.cpp**

>   **Step 2: Compile the source code; then run the executable. The total time
>   taken to run this program (in seconds) will be displayed as the final
>   several lines on the screen. This is the time spent for regular function
>   calls. Modify the code properly and run this program 10 times and record the
>   total time taken for each run. Then take the average and name it as
>   Avg_no_inline.**

>   **For example:**

>   **After you run the program 10 times, you may get**

>   **1st run: 76.1 seconds**

>   **2nd run: 76.3 seconds**

>   **3rd run: 77.2 seconds**

>   **4th run: 75.1 seconds**

>   **5th run: 78.1 seconds**

>   **6th run: 77.1 seconds**

>   **7th run: 76.1 seconds**

>   **8th run: 78.1 seconds**

>   **9th run: 76.2 seconds**

>   **10th run: 77.1 seconds**

>   **Then compute Avg_no_inline and you get the average of these 10 numbers =
>   76.74**

>   **Step 3: Comment out line 19 of**
>   [no_inline_test.cpp](http://www.csie.nuk.edu.tw/~cfhuang/OOP2009/no_inline_test.cpp)
>   **and remove the comment on line 20 (i.e., remove the “//” before line 20).
>   Then save the file and re-compile it; then run the executable. The total
>   time taken to run this program will be displayed again on the screen. This
>   is the time spent for running inline usage. Run this program 10 times and
>   record the total time taken for each run. Then take the average and name it
>   as Avg_inline.**

**Problem 2:** 請自定義兩個名稱空間，分別是
dimensionTwo還有dimensionThree，並且在這兩個名稱空間中，皆需放入名稱為print的自定義函式。其print函式的功能為：在dimensionTwo名稱空間裡頭的print函式負責印出”This
is dimensionTwo.\\n”；而在dimensionThree名稱空間裡頭的print函式負責印出”This is
dimensionThress.\\n”。

　　最後，在int main的區塊中，dimensionTwo使用using namespace
的方式來呼叫print函式；dimensionThree則使用範疇解析運算子(::)來呼叫print函式，並且印出執行結果。

# Hw2_Fall2016_A1045516

**Homework set \#2**

**Object Oriented Programming**

**(Upload your homework to E-learning before November/10/2016.**

**Please consult your TA for any questions).**

**Problem 1: Work on the following practice for interface and implementation**

Step 0: Make sure you have installed "Microsoft Visual C++ 2010 Express
Edition".

Step 1: Generate a directory as the vendor side containing GradeBook.h (Fig.
16.11 in your

textbook) and GradeBook.cpp (Fig. 16.12 in your textbook), where one assumes
that the

vendor has "GradeBook.h" as the interface file and "GradeBook.cpp" as the
implementation

file.

Step 2: Generate a directory as the client side containing GradeBook.h (Fig.
16.11 in your

textbook) and fig16_13.cpp (Fig. 16.13), where "GradeBook.h" is the interface
file offered by

the vendor and fig16_13.cpp represents the code written by the client. (Note:
Step 1 and 2

thus simulate the situation where the client doesn’t know what the
implementation are in

GradeBook.cpp.)

Step 3: In Window’s Start menu, go to "Microsoft Visual C++ 2010 Express
Edition".

Then go to “Visual Studio Command Prompt (2010)”.

By this you can open a Visual Studio command prompt. (Note: this is somewhat
different

from the regular Dos Command prompt. As you shall see, some C++ commands can
only be

used in the Visual Studio command prompt.)

Step 4: In the Visual Studio command prompt, change your directory to the
vendor’s directory, then type

cl /c /EHsc GradeBook.cpp

Then this generates GradeBook.obj

Step 5: Copy this GradeBook.obj to the client directory that contains
"fig16_13.cpp" and

"GradeBook.h".

And in the "Visual Studio Command Prompt (2010)", change to this directory. Then
in this prompt,

1.  type

cl /c /EHsc fig16_13.cpp

This generates fig16_13.obj.

1.  Then to generate the executable, type

link GradeBook.obj fig16_13.obj /out:fig16_13.exe

1.  You can then run fig16_13.exe

**(Note**: Step 5 above simulates the situation where the software vendor sold
to the client the interface file and the object code, in order to hide the
implementation details in

GradeBook.cpp. So essentially the client won’t have any knowledge about the
internal implementation of the functions of the GradeBook class.)

For this problem, follow the steps above to generate two folders, named “vendor”
and “client”, where the vendor folder should contain the files (.h, .cpp, .obj),
and the client folder should contain the files (.h, .cpp, .obj, .exe) designated
as above. Zip these files; then name the zipped file as, e.g.,
**Hw2_Fall2016_Prob1_A1045501.rar**, and then upload the compressed file to
e-learning. Also, you need to generate a .doc document to print out the output
on the screen after executing the .exe.
