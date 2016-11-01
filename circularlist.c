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

node insert_f(node last,int x)
{
node temp=getnode();
temp->info=x;
if(last==NULL)
{
 temp->link=temp;
 return temp;
}
temp->link=last->link;
last->link=temp;
return last;
}

node insert_r(node last, int x)
{
node temp=getnode();
temp->info=x;
if(last==NULL)
{
 temp->link=temp;
 return temp;
}
temp->link=last->link;
last->link=temp;
return temp;
}

node delete_f(node last)
{
 node first;
 if(last==NULL)
{
 printf("Empty List\n");
 return last;
}
 if(last->link==last)
{
 printf("%d deleted\n",last->info);
 free(last);
 return NULL;
}
first=last->link;
printf("%d deleted\n",first->info);
last->link=first->link;
free(first);
return last;
}
node delete_r(node last)
{
 node prev,cur;;
 if(last==NULL)
 {
  printf("Empty list\n");
  return last;
 }
 if(last->link==last)
{
 printf("%d deleted\n",last->info);
 free(last);
 return NULL;
}

 prev=last->link;
 while(prev->link!=NULL)
 { 
  prev=prev->link;
 }
 printf("%d deleted\n",last->info);
 prev->link=last->link;
 free(last);
 return prev;
}

void display(node last)
{
 node prev;
if(last==NULL)
{
 printf("Empty list\n");
 return;
}
 prev=last->link;
 while(prev!=last)
 {
  printf("%d->",prev->info);
  prev=prev->link;
}
printf("%d\n",last->info); 
}

int main()
{
 node last=NULL;
 int ch, item,key;
for(;;)
{
 printf("Enter:\n1.To insert front\n2.To insert rear\n3.To delete front\n4.To delete rear\n5.To display\n6.To exit\n");
 scanf("%d",&ch);
 switch(ch)
{
 case 1:
 printf("Enter the element \n");
 scanf("%d",&item);
 last=insert_f(last,item);
 break;

 case 2:
 printf("Enter the element \n");
 scanf("%d",&item);
 last=insert_r(last,item);
 break;

 case 3:
 last=delete_f(last);
 break;

 case 4:
 last=delete_r(last);
 break;

 case 5:
 display(last);
 break;

 case 6:
 exit(0);

 default: 
 printf("Invalid choice\n");
}
}
return 0;

}
