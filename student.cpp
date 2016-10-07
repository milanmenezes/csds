#include<iostream>
#include<cstring>
using namespace std;
class student{
 string name;
 string usn;
public:
	static int count;
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

static int countf()
{
 return count;
}

void display()
{
	cout<<name<<endl<<usn<<endl;
}
};

int student::count;
int main()
{
 student s1;
 cout<<s1.countf()<<endl;
 student s2("Milan","4ni5");
 cout<<s1.countf()<<endl;
 student s3=s2;
 cout<<s1.countf()<<endl;
 s3.display();
 return 0;
}
