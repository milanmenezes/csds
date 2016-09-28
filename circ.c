#include<stdio.h>
#define max 5

struct queue
{
int a[max];
int f;
int r;
};

int insert(struct queue *p, int item)
{
 if(((p->r)+1)%max==(p->f))
 {
  printf("Queue full\n");
  return 0;
 }
 
 (p->r)=((p->r)+1)%max;
 (p->a[p->r])=item;
 return 1;
}

int delete(struct queue *p,int *res)
{
 if((p->f)==(p->r))
{
 printf("Queue empty\n");
 return 0;
}
 (p->f)=((p->f)+1)%max;
 *res=(p->a[p->f]);
 return 1;
}

void display(struct queue *p)
{
 int i;
 if((p->r)==(p->f))
 {
  printf("Queue empty\n");
  return;
 }
 
 for(i=((p->f))%max;i!=(p->r);i=(i+1)%max)
 {
  printf("%d ",(p->a[i+1]));
 }
 printf("\n");
}
int main()
{
 int item, res,oper=0,sorf,c=1;
 struct queue q1;
 q1.f=max-1;
 q1.r=max-1;
 while(c)
 {
  printf("Enter:\n1.For insertion\n2.For deletion\n3.To display\n4.To quit\n");
  scanf("%d",&oper);
  switch(oper)
 {
  case 1:
  printf("Enter the element to add\n");
  scanf("%d",&item);
  sorf=insert(&q1,item);
  if(sorf)
   printf("Element %d has been inserted\n",item);
  sorf=0;
  break;
  case 2:
  sorf=delete(&q1,&res);
  if(sorf)
  printf("Element %d has been deleted\n",res);
  
  sorf=0;
  break;
  case 3:
  display(&q1);
  break;
  case 4:
   c=0;
   break;
  default:
   printf("Invalid option\n");
   break;
}
}
return 0;
}





