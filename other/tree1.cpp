#include <iostream>
using namespace std;

struct node{
  int data;
  node* lchild;
  node* rchild;
};

node* newNode(int x){
    node* next = new node();
    next->data = x;
    next->lchild = NULL;
    next->rchild = NULL;
    return next;
}

void search(node* head, int x){
  cout<<head<<"\n";
  cout<<head->data<<"\n";
  cout<<head->lchild<<"\n";
  cout<<head->rchild<<"\n";
  cout<<"-----------\n";

  if(head->data == x){
    cout<<"*************\n";
    cout<<"Element Found\n";

  }
  else{
    if(head->lchild != NULL){
     search(head->lchild, x);

    }
    if(head->rchild != NULL){
      search(head->rchild, x);
    }
  }

}



int main(){
  node* head = newNode(5);
  head->lchild = newNode(4);
  head->rchild = newNode(6);
  head->lchild->lchild = newNode(3);
  search(head, 3);

}
