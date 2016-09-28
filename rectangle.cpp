#include<iostream>
#include<iomanip>

class rectangle
{
 int l;
 int b;
 mutable int a;

 public:
 rectangle()
 {
 l=0;
 b=0;
 }
 rectangle(int l1, int b1=1)
 {
  l=l1;
  b=b1;
 }
 rectangle setdimension(const int l1,const int b1);
 int area() const;
 int perim() const;
 };

 rectangle& rectangle::setdimension(const int l1,const int b1)
 {
  l=l1;
  b=b1;
  a=l*b;
  return this;
 }
 
 int rectangle::area()
 {
 a=l*b;
 return a;
 }

 int rectangle::perim()
 {
 return l+b;
 }

 int main()
 {
  rectangle r1{0};
  return 0;
 }

