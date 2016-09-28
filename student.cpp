#include<iostream>
#include<cstring>
using namespace std;
static int count=0;
class student{
 string name;
 string usn;
public:
 student(){
 count++;
 name="\0";
 usn="\0";
}
student(string name1,string usn1){
 count++;
 name=name1;
 usn=usn1;
}

student (const student &o)
{
 count++;
 name=o.name;
 usn=o.usn;
}

static int display()
{
 return count;
}
};
int main()
{
 student s1;
 cout<<s1.display()<<endl;
 student s2("Milan","4ni5");
 cout<<s1.display()<<endl;
 student s3=s2;
 cout<<s1.display()<<endl;
 return 0;
}
