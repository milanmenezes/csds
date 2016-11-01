#include<stdio.h>
#include<stdlib.h>
struct d_list
{
 int info;
 struct d_list * left;
 struct d_list * right;
};

 typedef struct d_list * node;

 node getnode()
{
 node temp;
 temp=(node)malloc(sizeof(struct d_list));
 return temp;
}

 void insert(node head, int item, int pos)
{
 node cur,prev;
 int i;
  node temp=getnode();
  temp->info=item;
if(head->right==head){
  temp->left=head;
  temp->right=head;
  head->right=temp;
  head->left=temp;
  (head->info)++;
  printf("%d inserted\n",item);
  return;
 }
 cur=head->right;
 for(i=0;i<pos;i++)
 {
  prev=cur;
  cur=cur->right;
}
 temp->left=prev;
 temp->right=cur;
 prev->right=temp;
 cur->left=temp;
 (head->info)++;
 printf("%d is inserted\n",item);
}

 void deletep(node head,int key)
{
 node prev,cur,next;
 if(head->right==head)
 {
  printf("Empty list\n");
  return;
 }

 cur=head->right;
 while(cur!=head){
 if(key==cur->info)
  break;
 cur=cur->right;
}
if(cur==head)
{
 printf("Element not found\n");
 return;
}
prev=cur->left;
next=cur->right;
printf("%d deleted \n",key);
free(cur);
prev->right=next;
next->left=prev;
(head->info)--;
}

void search(node head,int key)
{
 node cur=head->right;
 int i=-1;
 while(cur!=head)
{
 i++;
 cur=cur->right;
}
 if(cur==head)
{
 printf("Element not found\n");
}

else
{
printf("Element fount at position %d\n",i);
}
}
void display(node head)
{
 node cur;
 if(head->right==head)
 {
 printf("Empty list\n");
 return;
 }
 cur=head->right;
 while(cur!=head)
{
 printf("%d->",cur->info);
 cur=cur->right;
}
printf("\n");
}

int main()
{
 node head;
 int ch,item,pos,key;
 head=getnode();
 head->info=0;
 head->left=(head->right)=head;
 for(;;)
{
 printf("Enter:\n1.To insert\n2.To delete\n3.To display\n4.To search\n5.To quit\n");
 scanf("%d",&ch);
 switch(ch)
{
 case 1:
 printf("Enter the position where the element has to be inserted\n");
  scanf("%d",&pos);
  printf("Enter the element\n");
  scanf("%d",&item);
  insert(head,item,pos);
  break;

 case 2:
  printf("Enter the key element\n");
  scanf("%d",&key);
  deletep(head,key);
  break;

 case 3:
  display(head);
  break;

 case 4:
  printf("Enter the search element\n");
 scanf("%d",&key);
 search(head,key);
 break;
 case 5:
  exit(0);
 default:
  printf("Invalid choice\n");
  break;
}
}
return 0;
}
