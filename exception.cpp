#include<bits/stdc++.h>
using namespace std;
class x{
 double a,b;
 public:
 void input()
{ 
 while(1){
 try{
 cout<<"Enter 2 double type numbers between 0 to 100"<<endl;
 cin>>a>>b;
 if(a>100 || a<0 || b>100 || b<0)
  throw 100;
 else if(b==0)
 throw 20.2;
 break;
}
catch(int c)
 {
  cout<<"Enter valid numbers"<<endl;
 }
catch(double d)
 {
  cout<<"Division by 0 not defined"<<endl;
 }
}
}
 void divide()
 {
  cout<<a/b<<endl;
 }
};

int main()
{
 x obj;
 obj.input();
 obj.divide();
 return 0;
}

