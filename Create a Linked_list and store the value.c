#include<stdio.h>
#include<stdlib.h>

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
     n = n->next;
  }
}

int main()
{
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

  head->data = 5;
  head->next = second;

  second->data = 3;
  second->next = third;

  third->data = 9;
  third->next = fourth;

  fourth->data = 42;
  fourth->next = fifth;

  fifth->data = 0;
  fifth->next = sixth;

  sixth->data = 10;
  sixth->next = NULL;

  printList(head);

  return 0;
}
