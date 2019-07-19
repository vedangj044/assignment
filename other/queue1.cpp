#include <iostream>
using namespace std;

class queue{
  public:
    struct node{
      int data;
      node* link;
    };

    node* head = NULL;
    node* rear = NULL;

    void enqueue(int x){
      node* temp = new node();
      temp->data=x;
      temp->link=rear;
      rear=temp;
      if(head==NULL){
        head=temp;
      }
    }

    void dequeue(){
      node* temp = head;
      head=temp->link;
      free(temp);
    }

    void print(){
      node* l = head;
      while(l!=NULL){
        cout<<l->data<<" ";
        l=l->link;
      }
      cout<<l->data<<"\n";
    }
};

int main(){
  queue q;
  q.enqueue(1);
  q.print();

  return 0;
}
