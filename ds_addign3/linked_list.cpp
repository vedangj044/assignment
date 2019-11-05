#include <iostream>
using namespace std;

struct node{
  int data;
  node* link;
};

node* head = NULL;

void insert_front(int x){
  node* temp = new node();
  temp->data = x;
  temp->link = head;
  head = temp;
}

void insert_pos(int x, int pos){
  node* temp = new node();
  temp->data = x;

  node* l = head;
  for(int i = 0; i < pos; i++){
    l = l->link;
  }
  temp->link = l;
  l = temp;
}

void insert_last(int x){
  node* temp = new node();
  temp->data = x;
  temp->link = NULL;

  node* l = head;
  while(l->link != NULL){
    l = l->link;
  }
  l->link = temp;
}

void delete_front(){
  node* temp = head;
  head = head->link;
  free(temp);
}

void delete_pos(int x){
  node* temp = head;
  node* l = head;
  for(int i = 0; i < pos-1; i++){
      l = l->link;
  }
  temp = l;
  temp->link = l->link;
}

int main(){
  return 0;
}
