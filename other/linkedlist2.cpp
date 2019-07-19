0 #include <iostream>
using namespace std;

struct node{
  int data;
  node* link;
};

node* head = NULL;

void Insert(int x){
  node* temp = new node();
  temp->data = x;
  temp->link = head;
  head = temp;
}

void Print(){
  node* l = head;
  if(l->link==NULL){
    cout<<l->data<<" ";
  }
  while(l->link!=NULL){
    cout<<l->data<<" ";
    if((l->link)->link==NULL){
      cout<<(l->link)->data<<" ";
    }
    l = l->link;
  }

  cout<<"\n";
}

int main(){
  for(int i=0; i<5; i++){
    int datavalue;
    cout<<"Enter a number ";
    cin>>datavalue;
    Insert(datavalue);
    Print();
  }
  return 0;
}
