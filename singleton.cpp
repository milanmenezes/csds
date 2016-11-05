#include<bits/stdc++.h>
using namespace std;

class sum{
 int a;
 int b;
 public:
 static int count;
 sum(int x=0, int y=0)
 {
  if(count)
  {
  cout<<"Only one object allowed"<<endl;
  }
 a=x;
 b=y;
 count++;
 }

 int add()
{
 return a+b;
}
};

int sum::count;

int main()
{
 sum s1(2,3);
cout<<s1.add()<<endl;
 sum s2(4,5);
 return 0;
}
