#include<stdio.h>

struct Node
{
  int data;
  struct Node *next;
};
void insert(int pos,int value)
{

    node *pre=new node;
    node *cur=new node;
    node *temp=new node;
    cur=head;
    for(int i=1;i<pos;i++)
    {
      pre=cur;
      cur=cur->next;
    }
    temp->data=value;
    pre->next=temp;
    temp->next=cur;

}



int main(){

  struct Node* pre = NULL;
  struct Node* cur = NULL;
  struct Node* temp = NULL;
  struct Node* head = NULL;
  struct Node* second = NULL;
  struct Node* third = NULL;
  struct Node* fourth = NULL;
  struct Node* fifth = NULL;
  struct Node* sixth = NULL;

  pre = (struct Node*)malloc(sizeof(struct Node));
  cur = (struct Node*)malloc(sizeof(struct Node));
  temp = (struct Node*)malloc(sizeof(struct Node));
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

  insert(2,3);

  return 0;


}

