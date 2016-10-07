#include<stdio.h>
#include<stdlib.h>
struct l_list 
{
 int info;
 struct l_list * link;
};
typedef struct l_list * node;

node getnode()
{
 node temp=(node) malloc(sizeof(struct l_list));
 if(temp==NULL)
 {
 printf("No Memory \n");
 exit(0);
}
 return temp;
}

node insert_f(node front,int x)
{
node temp=getnode();
temp->info=x;
temp->link=front;
return temp;
}

node insert_r(node front, int x)
{
 node cur;
 node temp=getnode();
 temp->info=x;
 temp->link=NULL;
 if(front==NULL)
{
 return temp;
}

cur=front;
 while(cur->link!=NULL)
{
 cur=cur->link;
}
 cur->link=temp;
 return front;
}

node delete_f(node front)
{
 node temp;
 if(front==NULL)
{
 printf("Empty List\n");
 return front;
}
 temp=front;
 printf("%d deleted\n",front->info);
 front=front->link;
 free(temp);
 return front;
}

node delete_r(node front)
{
 node prev,cur;
 if(front==NULL)
 {
  printf("Empty list\n");
  return front;
 }
 if(front->link==NULL)
{
 printf("%d deleted\n",front->info);
 free(front);
 return NULL;
}
 prev=NULL;
 cur=front;
 while(cur->link!=NULL)
 { 
  prev=cur;
  cur=cur->link;
 }
 printf("%d deleted\n",cur->info);
 free(cur);
 prev->link=NULL;
 return front;
}

void display(node front)
{
if(front==NULL)
{
 printf("Empty list\n");
 return;
}
 while(front!=NULL)
 {
  printf("%d ",front->info);
  front=front->link;
}
printf("\n"); 
}
node delete_s(node front,int key)
{
 node prev,cur;
 cur=front;
 prev=NULL;
 if(front==NULL)
 {
  printf("Empty list\n");
  return front;
 }
 if(cur->link==NULL)
 {
  if(cur->info==key)
{
 printf("%d deleted",cur->info);
 free(cur);
 return NULL;
}
 }
 while(cur!=NULL)
 {
  if(cur->info==key)
 {
  printf("%d deleted\n", cur->info);
  prev->link=cur->link;
  free(cur);
  return front;
 }
  prev=cur;
  cur=cur->link;
 } 
 printf("Element not found\n");
 return front;
}
int main()
{
 node first=NULL;
 int ch, item,key;
for(;;)
{
 printf("Enter:\n1.To insert front\n2.To insert rear\n3.To delete front\n4.To delete rear\n5.To display\n6.To delete search element\n7.To exit\n");
 scanf("%d",&ch);
 switch(ch)
{
 case 1:
 printf("Enter the element \n");
 scanf("%d",&item);
 first=insert_f(first,item);
 break;

 case 2:
 printf("Enter the element \n");
 scanf("%d",&item);
 first=insert_r(first,item);
 break;

 case 3:
 first=delete_f(first);
 break;

 case 4:
 first=delete_r(first);
 break;

 case 5:
 display(first);
 break;

 case 6:
 printf("Enter the search element\n");
 scanf("%d",&key);
 first=delete_s(first,key);
 break;

 case 7:
 exit(0);

 default: 
 printf("Invalid choice\n");
}
}
return 0;
}
