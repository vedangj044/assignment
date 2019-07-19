#include <iostream>
using namespace std;

struct node{
  int data;
  node* link;
};

node* head = NULL;
int endoflist = 0;

void Insert(int x){
  node* temp = new node();
  temp->data = x;
  temp->link = 0;
  endoflist+=1;
  if(head==NULL){
    head = temp;
  }
  node* l = head;
  for(int k=0; k<endoflist; k++){
    cout<<l->data;
    l=l->link;
  }
}

void Print(){
  node* l = head;
  for(int lin=0; lin<5; lin++){
    cout<<l->data;
    l = l->link;
  }
  cout<<"\n";
}

int main(){
  for(int i=0; i<5; i++){
    int datavalue;
    cout<<"Enter number: ";
    cin>>datavalue;
    Insert(datavalue);
    Print();
  }
  return 0;
}
