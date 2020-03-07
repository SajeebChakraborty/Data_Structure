#include<stdio.h>
#include<math.h>
#define PI 3.1416

int value = PI/180;

struct Node
{
  int data;
  struct Node *next;
};
void sinvalue(struct Node *n)
{

  while (n != NULL)
  {
    printf("%d\n",sin(value*n->data));

     n = n->next;
  }
}



int main(){


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

  sinvalue(head);

  return 0;


}

