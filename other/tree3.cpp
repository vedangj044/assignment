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

int inorder(node* head){
  if(head == NULL){
    return 0;
  }
  inorder(head->lchild);
  cout<<head->data<<"  ";
  inorder(head->rchild);
}

int preorder(node* head){
  if(head == NULL){
    return 0;
  }
  cout<<head->data<<"  ";
  preorder(head->lchild);
  preorder(head->rchild);
}

int postorder(node* head){
  if(head == NULL){
    return 0;
  }

  postorder(head->lchild);
  postorder(head->rchild);
  cout<<head->data<<"  ";
}

int main(){
  node* head = newNode(1);
  head->lchild = newNode(2);
  head->rchild = newNode(3);
  head->lchild->lchild = newNode(4);
  head->lchild->rchild = newNode(5);
  head->rchild->lchild = newNode(6);

  cout<<"inorder:   ";
  inorder(head);
  cout<<"\n";
  cout<<"preorder:  ";
  preorder(head);
  cout<<"\n";
  cout<<"postorder: ";
  postorder(head);
  cout<<"\n";
}
