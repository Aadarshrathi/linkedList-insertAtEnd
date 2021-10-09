#include <stdio.h> 
#include<stdlib.h>

struct Node {
    int data;
    struct Node*next;
};
 void linkedListTraversal (struct Node*ptr )
 {
     while(ptr!=NULL)
     {
         printf("Element : %d\n",ptr->data );
         ptr=ptr->next;
     }
 }
  struct Node *insertAtEnd(struct Node* head ,int data){
      struct Node * ptr =(struct Node *)malloc(sizeof(struct Node ));
      ptr->data =data;
      struct Node*p=head;
      while( p->next!=NULL){
          p=p->next;
      }
      p->next =ptr;
      ptr ->next=NULL;
      return head ;
  }
  int main() 
   {
  struct Node * head;
  struct Node * second;
  struct Node * third;
  //alocate memory for nodes in linked in heap
  head = (struct Node *)malloc(sizeof (struct Node));
  second = (struct Node *)malloc(sizeof (struct Node));
 third= (struct Node *)malloc(sizeof (struct Node));

 head->data=7;
 head->next=second;

 second->data=11;
 second->next=third;

 third->data=15;
 third->next=NULL;
 printf("Linked List befor insertion\n");
 linkedListTraversal(head);
 head=insertAtEnd(head,  56);
 printf("Linked List after insertion\n");
 linkedListTraversal(head);

 return 0;
   }