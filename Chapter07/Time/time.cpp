/***************************************************************
 * The impletation file time.cpp for functions in Time class *
 ***************************************************************/
#include <cmath>
#include <cassert>
#include "time.h"

/***************************************************************
 * The parameter constructor accepts three values corresponding *
 * to the data members from the user and initializes and object. *
 * It uses the normalize function to ensure that hours, minutes, *
 * and seconds are in the predefined ranges. *
 ***************************************************************/
Time ::Time(int hr, int mi, int se)
    : hours(hr), minutes(mi), seconds(se)
{
    normalize();
}
/***************************************************************
 * The default constructor creates a time object. *
 ***************************************************************/
Time ::Time()
    : hours(0), minutes(0), seconds(0)
{
}
/***************************************************************
 * The destructor just cleans up the object(s) before recycling. *
 ***************************************************************/
Time ::~Time()
{
}
/***************************************************************
 * The print function is an accessor function that has a side *
 * effect: it displays the time. *
 ***************************************************************/
void Time ::print() const
{
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
/***************************************************************
 * The tick function is a mutator function that increments the *
 * number of seconds. *
 ***************************************************************/
void Time ::tick()
{
    seconds++;
    normalize();
}
/***************************************************************
 * The normalize function checks the invariants of the class. *
 * It either aborts the creation of the class or normalizes the *
 * the hours, minutes, and the seconds. *
 ***************************************************************/
void Time ::normalize()
{
    // Handling negative data members
    if ((hours < 0) || (minutes < 0) || (seconds < 0))
    {
        cout << "Data are not valid. Need to quit!" << endl;
        assert(false);
    }
    // Handling out of range values
    if (seconds > 59)
    {
        int temp = seconds / 60;
        seconds = seconds % 60;
        minutes = minutes + temp;
    }
    if (minutes > 59)
    {
        int temp = minutes / 60;
        minutes = minutes % 60;
        hours = hours + temp;
    }
    if (hours > 23)
    {
        hours = hours % 24;
    }
}