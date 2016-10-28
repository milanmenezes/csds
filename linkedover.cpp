#include<iostream>
#include<new>
#include<stdlib.h>

using namespace std;
class Node{
public:
int data;
Node* next;
};

class LinkedList{
private:
Node* start; // Ponits to starting node of the list.
public:
LinkedList(){
 start=NULL;
 }
Node* getnode(){
 Node *temp;
 temp= new Node;
 if(temp==NULL)
  {
  cout<<"Out of memory";
  exit(0);
 } 
 return temp;
}
void insert(int item){
 if(start==NULL)
 {
  Node *temp=getnode();
  (temp->data)=item;
  (temp->next)=NULL;
  start=temp;
  return;
 }
 Node *cur;
 cur=start;
 while((cur->next)!=NULL)
 {
 cur=(cur->next);
 }

 
 Node *temp=getnode();
 (temp->data)=item;
 (temp->next)=NULL;
 (cur->next)=temp;
 cout<<item<<" Inserted successfully"<<endl;
} 
void deleter(){
 if(start==NULL)
{
 cout<<"Empty List"<<endl;
 return;
}
 if((start->next)==NULL)
{
 cout<<(start->next)->data<<" deleted sucessfully"<<endl;
 delete start;
 start=NULL;
return;
}
 Node *cur,*prev;
 prev=NULL;
 cur=start;
 while((cur->next)!=NULL)
{
 prev=cur;
 cur=(cur->next);
}
 cout<<cur->data<<" deleted sucessfully"<<endl;
 prev->next=NULL;
 delete cur;
}
int search(int key)
{
 Node *temp;
 int c=0;
 temp=start;
 while(temp!=NULL)
 {
 if(temp->data==key)
  break;
 c++;
 temp=temp->next;
  }
 if(temp==NULL)
  cout<<"Element not found"<<endl;

 else{
  cout<<"Element found at position "<<c+1<<endl;

}

}


 
void display()
{
 if(start==NULL)
  {
  cout<<"List empty"<<endl;
  return;
  }
 Node *temp;
 temp=start;
 while(temp!=NULL)
{
 cout<<temp->data<<"->";
 temp=temp->next;
}
cout<<endl;

}
};

int main()
{
 LinkedList l;
 int c,item,key;
 for(;;)
 {
 cout<<"Enter 1.to insert 2.to delete 3.to display 4.to search 5.to exit"<<endl;
 cin>>c;
 
 switch(c)
{
 case 1:
  cout<<"Enter the element"<<endl;
  cin>>item;
  l.insert(item);
  break;

 case 2:
  l.deleter();
  break;

 case 3:
  l.display();
  break;

 case 4:
 cout<<"Enter the search element"<<endl;
 cin>>key;
 l.search(key);
 break;

 case 5:
 exit(0);

 default:
 cout<<"Invalid Choice"<<endl;
}
}
return 0;
}
