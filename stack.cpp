#include<iostream>
#include<stdlib.h>
#define max 10
using namespace std;
class stack
{
 int a[max];
 int top;

 public:
 int push(int item)
 {
 if(top==max-1)
 {
 cout<<"Stack overflow"<<endl;
 return 0;
 }
 top++;
 a[top]=item;
 return 1;
 }
 
 int pop(int *res)
 {
 if(top==-1)
 {
 cout<<"stack empty"<<endl;
 return 0;
 }
 *res=a[top];
 top--;
 return 1;
}

 stack()
 {
 top=-1;
 }

 void display()
 {
 int i;
 for(i=top;i>=0;i--)
  cout<<" "<<a[i];

 cout<<endl;
 }
};

int main()
{
 int item, res, soorf,c;
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
 soorf=s1.push(item);
 if(soorf)
 cout<<item<<" pushed successfully"<<endl;
 break;
 
 case 2:
 soorf=s1.pop(&res);
 if(soorf)
 cout<<res<<" popped successfull"<<endl;
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
