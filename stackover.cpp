#include<iostream>
#include<stdlib.h>
#define max 10
using namespace std;
class stack
{
 int a[max];
 int top;

 public:
 stack operator+(int item)
 {
 if(top==max-1)
 {
 cout<<"Stack overflow"<<endl;
 return *this;
 }
 top++;
 a[top]=item;
 cout<<item<<" pushed successfully"<<endl;
 return *this;
 }
 
 stack operator--(int)
 {
 if(top==-1)
 {
 cout<<"stack empty"<<endl;
 return *this;
 }
 cout<<a[top]<<" deleted"<<endl;
 top--;
 return *this;
}

 stack()
 {
 top=-1;
 }

 void display()
 {
 int i;
 for(i=0;i<=top;i++)
  cout<<" "<<a[i];

 cout<<endl;
 }
};

int main()
{
 int item,c,res;
 stack s1;
 while(1)
 {
  cout<<"Enter:\n1.To push\n2.To pop\n3.To display\n4.To exit\n";
  cin>>c;
  switch(c)
 {
 case 1:
 cout<<"Enter the element"<<endl;
 cin>>item;
 s1+item;
 break;
 
 case 2:
 s1--;
 break;

 case 3:
 s1.display();
 break;

 case 4:
 exit(0);

 default:
 cout<<"invald choice"<<endl;
 break;

 }
}
return 0;
}
