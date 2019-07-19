#include <iostream>
using namespace std;

struct node{
  int data;
  struct node* link;
};

struct node* head = NULL;

void Insert(int x){
  node* temp;
  temp->data = x;
  temp->link = head;
  head->link = (node*)temp;
}



int main(){
  for(int j=0; j<5; j++){
    int i;
    cout<<"Enter a number";
    cin>>i;
    Insert(i);
    //Print();
  }
  return 0;
}
