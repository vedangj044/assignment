#include <iostream>
using namespace std;

struct node{
  int data;
  node* rchild;
  node* lchild;
};

void insert(node* head, int x, int level){
  node* l = head;

  node* next = new node();
  next->data = x;
  next->lchild = NULL;
  next->rchild = NULL;

  if(l->lchild == NULL){
    l->lchild = next;
    level++;
  }
  else if(l->rchild == NULL){
    l->rchild = next;
  }
  else{
    free(next);
    insert(l->lchild, x, level);

  }
}

void print(node* head){
  cout<<head<<"\n";
  cout<<head->data<<"\n";
  cout<<head->lchild<<"\n";
  cout<<head->rchild<<"\n";
  cout<<"-----------\n";

  if(head->lchild != NULL){
    cout<<"l";
    print(head->lchild);

  }
  if(head->rchild != NULL){
    cout<<"r";
    print(head->rchild);
  }
}

int main(){
  node* head = new node();
  head->data = 5;
  head->lchild = NULL;
  head->rchild = NULL;
  insert(head, 10);
  insert(head, 22);
  insert(head, 25);
  insert(head, 29);
  insert(head, 37);
  insert(head, 56);
  print(head);

  return 0;
}
