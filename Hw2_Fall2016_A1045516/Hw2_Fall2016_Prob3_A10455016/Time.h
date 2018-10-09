#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
    public:
        Time(int,int,int);
        void set_hour(int);
        int get_hour();
        void set_minute(int);
        int get_minute();
        void set_second(int);
        int get_second();
        void displayTime();
    private:
        int hour;
        int minute;
        int second;
};
#endif // TIME_H_INCLUDED
