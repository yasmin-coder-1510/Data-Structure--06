#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
 int data;
 struct node *link;
};

void print_data(struct node *head)
{
 if(head ==NULL)
 {
   printf("The Linked List is Empty");
 }
  struct node *ptr;
  ptr =head;

  while(ptr != NULL)
  {
    printf("%d->",ptr->data);
    ptr = ptr->link;
  }
}

int main()
{
   struct node *head = malloc(sizeof(struct node));
 head->data = 13;
 head->link = NULL;

 struct node *current = malloc(sizeof(struct node));
 current->data = 93;
 current->link = NULL;

 head->link=current;

 current = malloc(sizeof(struct node));
 current->data = 1;
 current->link = NULL;

 head->link->link = current;

  print_data(head) ; //Function call

 getch();
}
