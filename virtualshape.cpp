#include <bits/stdc++.h>
using namespace std;
class Shape{
protected:
float area;
float perimeter;
public:
virtual void initialize()=0;
virtual float computeArea()=0;
virtual float computePerimeter()=0;
};

class triangle:public Shape{
float b,h;
public:
void initialize(){
 cout<<"Enter breadth and height of triangle"<<endl;
 cin>>b>>h;
}
float computeArea(){
  area=b*h/2;
  return area;
  }

float computePerimeter(){
 perimeter=3*b;
 return perimeter;
}
 };

class rectangle:public Shape{
 float l,b;
 public:
 void initialize(){
 cout<<"Enter leangth and breadth fo rectangle"<<endl;
 cin>>l>>b;
}
 
 float computeArea(){
  area=l*b;
  return area;
  }

float computePerimeter(){
 perimeter=2*(l+b);
 return perimeter;
}
 };
 
int main()
{
 float area, perimeter;
 Shape *s1= new triangle;
 Shape *s2= new rectangle;
 s1->initialize();
 area=s1->computeArea();
 cout<<"Area= "<<area<<endl;
 perimeter=s1->computePerimeter();
 cout<<"Perimeter= "<<perimeter<<endl;
 s2->initialize();
 area=s2->computeArea();
 cout<<"Area= "<<area<<endl;
 perimeter=s2->computePerimeter();
 cout<<"Perimeter= "<<perimeter<<endl;
 
delete s1;
delete s2;
 return 0;
}
