//Linked list implementation of stack
#include <iostream>
using namespace std;

class stack{
  public:
    struct node{
      int data;
      node* link;
    };

    node* head = NULL;

    void push(int x){
      node* temp = new node();
      temp->data = x;
      temp->link = head;
      head = temp;
    }

    void pop(){
      node* temp = head;
      head = temp->link;
      free(temp);
    }

    int topel(){
      node* temp = head;
      cout<<temp->data<<"\n";
      return temp->data;
    }

    bool isempty(){
      if(head==NULL){
        return true;
      }
      else{
        return false;
      }
    }

    void print(){
      node* l = head;
      while(l->link!=NULL){
        cout<<l->data<<" ";
        l = l->link;
      }
      cout<<l->data<<"\n";
    }
};
