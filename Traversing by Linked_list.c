#include<stdio.h>
int sum =0,avg,l,s;
struct Node
{
  int data;
  struct Node *next;
};

void printList(struct Node *n)
{

  while (n != NULL)
  {
     printf("%d ", n->data);
     sum = sum + n->data;
     n = n->next;
  }
}
void maximum(struct Node *n)
{

  while (n != NULL)
  {
     if(n->data > l)
     l = n->data;
     n = n->next;
  }
}
void minimum(struct Node *n)
{

  while (n != NULL)
  {
     if(n->data < s)
     s = n->data;
     n = n->next;
  }
}

int main()
{
 // int sum=0;
  struct Node* head = NULL;
  struct Node* second = NULL;
  struct Node* third = NULL;
  struct Node* fourth = NULL;
  struct Node* fifth = NULL;
  struct Node* sixth = NULL;

  head  = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third  = (struct Node*)malloc(sizeof(struct Node));
  fourth = (struct Node*)malloc(sizeof(struct Node));
  fifth = (struct Node*)malloc(sizeof(struct Node));
  sixth = (struct Node*)malloc(sizeof(struct Node));

  scanf("%d",&head->data);
  head->next = second;

  l = head->data;
  s = head->data;

  scanf("%d",&second->data);
  second->next = third;

  scanf("%d",&third->data);
  third->next = fourth;

  scanf("%d",&fourth->data);
  fourth->next = fifth;

  scanf("%d",&fifth->data);
  fifth->next = sixth;

  scanf("%d",&sixth->data);
  sixth->next = NULL;

  printList(head);
  avg = sum/6;
  maximum(head);
  minimum(head);
  printf("\nTotal Value = %d\n",sum);
  printf("Average = %d\n",avg);
  printf("Maximum = %d\n",l);
  printf("Minimum = %d\n",s);

  return 0;
}
