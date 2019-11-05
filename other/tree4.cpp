#include <iostream>
using namespace std;

struct node{
  int data;
  node* lchild;
  node* rchild;
};

node* newNode(int x){
  node* next = new node;
  next->data = x;
  next->lchild = NULL;
  next->rchild = NULL;
  return next;
}

node* insert(node* head, int x){
  if(head == NULL){
    node* head = newNode(x);
    return head;
  }

  if(x < head->data){
    head->lchild = insert(head->lchild, x);
  }
  else if(head->data < x){
    head->rchild = insert(head->rchild, x);
  }
}

int inorder(node* head){
  if(head == NULL){
    return 0;
  }
  inorder(head->lchild);
  cout<<head->data<<"  ";
  inorder(head->rchild);
}



int main(){
  node* head = NULL;
  head = insert(head, 3);
  insert(head, 2);
  insert(head, 4);
  insert(head, 7);
  insert(head, 6);
  insert(head, 8);
  inorder(head);
}
