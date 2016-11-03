#include <stdio.h>
#include <stdlib.h>

struct tree
{
 int info;
 struct tree *left,*right;
};

typedef struct tree * node;

node getnode()
{
 node temp;
 temp=(node)malloc(sizeof(struct tree));
 return temp;
}

node insert(node root,int x)
{node prev,cur;
 node temp=getnode();
 temp->left=temp->right=NULL;
 temp->info=x;
 if(root==NULL)
 {
 return temp;
}
 prev=NULL;
 cur=root;
while(cur!=NULL)
{
 prev=cur;
 if(x==cur->info)
{
 printf("Duplicate\n");
 free(temp); 
return root;
}
else if(x<cur->info)
{
 cur=cur->left;
}
else
 cur=cur->right;
}
if(x<prev->info)
{
 prev->left=temp;
}
else
 prev->right=temp;

return root;
}

void search(node root,int x)
{
node cur;
cur=root;
while(cur!=NULL)
{
 if(x==cur->info)
  {
  printf("Element found\n");
  return;
 }
 else if(x<cur->info)
  cur=cur->left;

 else cur=cur->right;
}
if(cur==NULL)
{
 printf("Element not found");
 return;
 }
else
 printf("Element found");
}

void preorder(node root)
{
 if(root!=NULL)
{
 printf("%d ",root->info);
 preorder(root->left);
 preorder(root->right);
}
}


void inorder(node root)
{
 if(root!=NULL)
{
 inorder(root->left);
 printf("%d ",root->info);
 inorder(root->right);
}
}

void postorder(node root)
{
 if(root!=NULL)
{
 postorder(root->left);
 postorder(root->right);
 printf("%d ",root->info);
}
}



int main()
{
 node root=NULL;
 int ch, item, key;
 for(;;){
 printf("\nEnter:\n1.To insert\n2.To search\n3.To display Preorder\n4.To display Inorder\n5.To display Postorder\n6.To exit\n");
 scanf("%d",&ch);
 switch(ch)
{
 case 1:
  printf("Enter the element\n");
  scanf("%d",&item);
  root=insert(root,item);
  break;

 case 2:
 printf("Enter the element to search\n");
 scanf("%d",&key);
 search(root,key);
 break;

case 3:
 preorder(root);
 break;

case 4:
 inorder(root);
 break;

case 5:
 postorder(root);
 break;

case 6:
 exit(0);

default:
 printf("Invalid Choice\n");

}
}
return 0;
}
