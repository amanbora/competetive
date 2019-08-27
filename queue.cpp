#include<iostream>
#define MAX_SIZE 10
#define MINUS_INF -999999
using namespace std;

class Queue{

    int arr[MAX_SIZE];
    int front;
    int rear;
    int count;

  public:
      Queue(){
          front=0;
          rear=0;
          count=0;
      }
      void enqueue(int element);
      int dequeue();
      bool isEmpty();
      int queueSize();
      bool isFull();
      int top();
      int bottom();
      void displayQueue(Queue q);

};

void Queue :: enqueue(int element)
{
    if(isFull()){
        cout<<"Queue overflow";
    }
    else {
      if(rear==MAX_SIZE)
          rear=0;
      arr[rear++]=element;
      count++;
    }
}

int Queue :: dequeue()
{
    if(isEmpty()){
        cout<<"Underflow"<<endl;
        return MINUS_INF;
    }
    int a=arr[front++];
    if(front==MAX_SIZE)
        front=0;
    count--;
    return a;
}

int Queue :: top()
{
  return arr[front];
}

int Queue :: bottom()
{
  return arr[rear-1];
}

bool Queue :: isEmpty()
{
  if(count==0)return true;
  return false;
}

bool Queue :: isFull()
{
  if(count==MAX_SIZE)return true;
  return false;
}

int Queue :: queueSize(){
  return count;
}

void Queue :: displayQueue(Queue q)
{
    Queue q1=q;
    while(!q.isEmpty()){
        cout<<q.dequeue()<<" "<<endl;
    }
    cout<<endl;
    q=q1;
}

void push(Queue *q1, Queue *q2, int x)
{
    if(q1->isEmpty())
        q2->enqueue(x);

    else
        q1->enqueue(x);

}
