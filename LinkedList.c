
#include<stdio.h>
#include<stdlib.h>
int main(){

}
struct Node{
  int data;
  struct Node* link;   //Node* link
};
struct Node* A;
A=NULL;
struct Node* temp;
temp=(struct Node*)(malloc)(sizeof(struct Node));
(*temp).data=2;                       //temp->data=2;
(*temp).link=NULL;


//second node
A=temp;
temp=(struct Node*)(malloc)(sizeof(struct Node));
(*temp).data=4;                       //temp->data=2;
(*temp).link=NULL;


//traversal
struct Node* temp1=A;
while((*temp1).link!=NULL){
  temp1=(*temp1).link;
}
(*temp1).link=temp;

/*



//inserting node at beginning



 struct Node{
   int data;
   struct Node* next;
 };


 void Insert(int x){
   struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
   *temp.data=x;
   *temp.next=NULL;
   if(head!=NULL)
      *temp.next=head;
   head=temp;
 }

void print(){
  struct Node* temp=head;
  printf("List is: ");
  while(temp!=NULL){
     printf("%d",*temp.data);
     temp=*temp.next;
  }
  printf("\n");
}

 struct Node* head;
 int main(){
   head=NULL;
   int x,n;
   printf("how many num?\n");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
     printf("Enter no.\n");
     scanf("%d",&x);
     Insert(x);
     print();
   }
 }



 //inserting at n position

#include<stdio.h>
#include<stdlib.h>
 struct Node{
   int data;
   struct Node* next;
 };
 struct Node* head;
void Insert(int,int);
void Print();

 int main(){



   int pos,x;
   for(int i=1;i<=5;i++)
{  printf("Enter position to enter node\n");
   scanf("%d",&pos);
   printf("enter no. to be stored\n");
   scanf("%d",&x);
   Insert(x,pos);
   Print();
}
 }
 void Insert(int x,int pos){
  struct Node* temp;
  temp=(struct Node*)malloc(sizeof(struct Node));
  (*temp).data=x;
  (*temp).next=NULL;
  if(n==1){
    (*temp).next=head;
    head=temp;
    return;
  }

  struct  Node* temp1;
  temp1=head;
  for(int i=1;i<pos;i++){
    temp1=(*temp1).next;
  }
  (*temp).next=temp1;
  temp1=head;
  for(int i=1;i<=pos-1;i++){
    temp1=(*temp1).next;
  }
  (*temp1).next=temp;
}
void Print(){
  struct Node* temp=head;
  printf("List is: ");
  while(temp!=NULL){
     printf("%d",(*temp).data);
     temp=(*temp).next;
  }
  printf("\n");
}
