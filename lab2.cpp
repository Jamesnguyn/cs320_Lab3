//James Nguyen
//820268781
//CS320 Lab 3

#include "lab2.h"
#include <iostream>
#include "point.cpp"

using namespace std;

int main(){
    Point pointOne(7,5);
    Point pointTwo(3,4);

    cout<<"Distance from origin to Point One : " <<pointOne.distance()<<endl;
    cout<<"Distance from origin to Point Two: " <<pointTwo.distance()<<endl;

    bool b = pointOne < pointTwo;
    cout<<"Point One less than Point Two: " <<boolalpha<<b<<endl;

    b = pointOne <= pointTwo;
    cout<<"Point One less than or equal to Point Two: " <<boolalpha<<b<<endl;

    b = pointOne > pointTwo;
    cout<<"Point One greater than Point Two: " <<boolalpha<<b<<endl;

    b = pointOne >= pointTwo;
    cout<<"Point One greater than or equal to Point Two: " <<boolalpha<<b<<endl;

    b = pointOne == pointTwo;
    cout<<"Point One equal to Point Two: " <<boolalpha<<b<<endl;

    b = pointOne != pointTwo;
    cout<<"Point One not equal to Point Two: " <<boolalpha<<b<<endl;

    return 0;
}

// scp "/Users/jamez/ClionProjects/cs320lab3/point.cpp" cssc1740@edoras.sdsu:/home/cs/healey/cssc1740/assign/lab3/point.cpp
// scp "/Users/jamez/ClionProjects/cs320lab3/lab2.cpp" cssc1740@edoras.sdsu:/home/cs/healey/cssc1740/assign/lab3/lab2.cpp
