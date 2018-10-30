#include<iostream>
using namespace std;
class rectangle
               {
      public:
            float length;
            float breadth;                 
            float area();
            float perimeter();
                };
float rectangle::area()
{
 return length*breadth;
}
float rectangle::perimeter()
{
return (2*(length+breadth));
}
int main(){
// 2 objects of class rectangle
rectangle r1,r2;
cout<<"Enter the length and breadth of first rectangle :";
cin>>r1.length>>r1.breadth;
cout<<"Enter the length and breadth of second rectangle :";
cin>>r2.length>>r2.breadth;
{
if(r1.area()>r2.area())
cout<<"Area of first triangle is greater"<<endl;

else if (r1.area()<r2.area())
cout<<"Area of second triangle is greater"<<endl;

else 
cout<<"Area of both triangles are same"<<endl;
    }

if(r1.perimeter()>r2.perimeter())
cout<<"Perimeter of first triangle is greater"<<endl;

else if(r1.perimeter()<r2.perimeter())
cout<<"Perimeter of second triangle is greater"<<endl;

else
cout<<"Perimeter of both triangles are same"<<endl;
return 0;
}
