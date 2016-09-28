#include<iostream>
#include<iomanip>
using namespace std;
class Complex
{
 public:
 int real;
 int imag;
 void display();
 int getr();
 int geti();
 void putr(int a)
 {
 real=a;
 }
 void puti(int a)
 {
 imag=a;
 }
};

Complex add(int a, Complex s1)
{
 Complex s3;
 s3.real=s1.real+a;
 s3.imag=s1.imag;
 return s3;
}

Complex add(Complex s1, Complex s2)
{
 Complex s3;
 s3.real=s1.real+s2.real;
 s3.imag=s1.imag+s2.imag;
 return s3;
}

int Complex::getr()
{
 return real;
}

int Complex::geti()
{
 return imag;
}

void Complex::display()
{
 cout<<real<<"+"<<imag<<"i"<<endl;
}

int main()
{
 Complex s1,s2,s3;
 int oper,c=1,real,imag;
 while(c){
 cout<<"Enter:\n1.To add a real number to a complex number\n2.To add 2 complex numbers\n3.To quit\n";
 cin>>oper;
 if(oper==1)
 {
  cout<<"Enter the real part of the complex number"<<endl;
  cin>>real;
  s1.putr(real);
  cout<<"Enter the imaginary part of the complex number"<<endl;
  cin>>imag;
  s1.puti(imag);
  cout<<"Enter the real part to be added"<<endl;
  cin>>real;
  s2.putr(real);
  s3=add(s2.getr(),s1);
  s3.display();
 }
 else if(oper==2)
 {
  cout<<"Enter the real part of the first complex number"<<endl;
  cin>>real;
  s1.putr(real);
  cout<<"Enter the imaginary part of the first complex number"<<endl;
  cin>>imag;
  s1.puti(imag);
  cout<<"Enter the real part of the second complex number"<<endl;
  cin>>real;
  s2.putr(real);
  cout<<"Enter the imaginary part of the second complex number"<<endl;
  cin>>imag;
  s2.puti(imag);
  s3=add(s1,s2);
  s3.display();
 }
 else if(oper==3)
 {
 return 0;
}
 else
 {
  cout<<"Invalid choice"<<endl;
 }
}
 return 0;
}
 
