#include <bits/stdc++.h>
using namespace std;

class getNode{
public:
int data;
getNode *left,*right;
};

typedef getNode * node;

class tree{
 node root;
 public:
 void insert(int);
 friend void preorder(node);
 friend void inorder(node);
 friend void postorder(node);
 friend int main();
 tree()
{
 root=NULL;
}
};

void tree::insert(int x)
{
 node prev,cur;
 node temp= new getNode;
 temp->data=x;
 temp->left=temp->right=NULL;
 if(root==NULL)
 {
  root=temp;
  return;
 }
 prev=NULL;
 cur=root;
 while(cur!=NULL)
{
 prev=cur;
 
if(x==cur->data)
{
 cout<<"Duplicate"<<endl;
 delete temp;
 return;
}

else if(x<cur->data)
 cur=cur->left;

else
 cur=cur->right;
}
if(x<prev->data)
 prev->left=temp;

else
 prev->right=temp;
}

void preorder(node lroot){
if(lroot!=NULL)
{
 cout<<lroot->data<<" ";
 preorder(lroot->left);
 preorder(lroot->right);
}
}

void inorder(node lroot){
if(lroot!=NULL)
{
 inorder(lroot->left);
 cout<<lroot->data<<" ";
 inorder(lroot->right);
}
}

void postorder(node lroot){
if(lroot!=NULL)
{
 postorder(lroot->left);
 postorder(lroot->right);
 cout<<lroot->data<<" ";
}
}

int main()
{
 int ch, item, key;
 tree t1;

 for(;;){
 cout<<"\nEnter:\n1.To insert\n2.To display Preorder\n3.To display Inorder\n4.To display Postorder\n5.To exit\n";
 cin>>ch;
 switch(ch)
{
 case 1:
  cout<<"Enter the element\n";
  cin>>item;
  t1.insert(item);
  break;

case 2:
 preorder(t1.root);
 break;

case 3:
 inorder(t1.root);
 break;

case 4:
 postorder(t1.root);
 break;

case 5:
 exit(0);

default:
 cout<<"Invalid Choice\n";

}
}
return 0;
} 
