#include <iostream>
using namespace std;


// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
public:
  // default class constructor (with no arguments):
  Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval);
  void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:
void Print(int x,int y);
// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 
    

//Lab 7 exercise 4.1. Add definition of member function print:
void Point::Print(int x,int y)
{
cout<<"coordinate is ("<<x<<","<<y<<")"<<endl;

}

// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************
class Rectangle : public Point
{


//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
  Point p1,p2,p3,p4;
  int side1,side2;
public:
    Rectangle(Point c1,Point c2);
    Rectangle ();
    int area();
};
Rectangle::Rectangle(Point c1, Point c2)
{
    p1=c1;
    p2=c2;
    while(c1.Get_X()<p2.Get_X())
    {
        c1.Move(1,0);
    }
    p3=c1;
    while(c2.Get_X()>p1.Get_X())
    {
        c2.Move(-1,0);
    }
    p4=c2;
    cout<<"For point 3 of rectangle:"<<endl;
    p3.Print(p3.Get_X(),p3.Get_Y());
    cout<<"For point 4 of rectangle:"<<endl;
    p4.Print(p4.Get_X(),p4.Get_Y());
    side1=p4.Get_Y()-p1.Get_Y();
    side2=p3.Get_X()-p1.Get_X();
}
// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************
  
//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 
int Rectangle::area()
{
    int area=side1*side2;
    return area;
}

// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1:
cout<<"For p1:"<<endl;
p1.Print(p1.Get_X(),p1.Get_Y());
cout<<"For p2:"<<endl;
p2.Print(p2.Get_X(),p2.Get_Y());

//Lab 7 Exercises 4.2, 4.3:  

cout<<"For corner point1 of rectangle:"<<endl;
p1.Print(p1.Get_X(),p1.Get_Y());
cout<<"For corner point2 of rectangle:"<<endl;
p2.Print(p2.Get_X(),p2.Get_Y());
Rectangle r(p1,p2);
cout<<"Area of the rectangle:"<<r.area()<<endl;
  return 0;
}

