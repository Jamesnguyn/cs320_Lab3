//James Nguyen
//820268781
//CS320 Lab 3

#include <iostream>
#include <math.h>

//Design a class or struct that models an abstract idea (i.e., a mathematical point)
//Information hiding: use the appropriate keyword (e.g., public or private)
//Overload operators to simplify code in calling functions
//Create a friend function

class Point{

    private: float x,y;

    public:
        //default
        Point(){
            x = 0;
            y = 0;
        }

        //parameters
        Point(float x, float y){
            this -> x = x;
            this -> y = y;
        }

        //distance from origin
        float distance() const{
            return sqrt(x*x + y*y);
        }

};

bool operator <= (const Point& lhs, const Point& rhs);
bool operator >= (const Point& lhs, const Point& rhs);
bool operator < (const Point& lhs, const Point& rhs);
bool operator > (const Point& lhs, const Point& rhs);
bool operator != (const Point& lhs, const Point& rhs);
bool operator == (const Point& lhs, const Point& rhs);

// >= overloading
inline bool operator >= (const Point& lhs, const Point& rhs){
    return !(lhs < rhs);
}

// <= overloading
inline bool operator <= (const Point& lhs, const Point& rhs){
    return lhs.distance() <= rhs.distance();
}

// > overloading
inline bool operator > (const Point& lhs, const Point& rhs){
    return !(lhs <= rhs);
}

// < overloading
inline bool operator < (const Point& lhs, const Point& rhs){
    return lhs.distance() < rhs.distance();
}

// == overloading
inline bool operator == (const Point& lhs, const Point& rhs){
    return !(lhs < rhs) && !(lhs > rhs);
}

// != overloading
inline bool operator != (const Point& lhs, const Point& rhs){
    return !(lhs == rhs);
}
