#include <iostream>
using namespace std;

class queue{
  public:
    int arr[5];
    int front=-1;
    int rear=-1;

    void enqueue(int x){
      if ((front == 0 && rear == 4) || (rear == (front-1)%4)){
          cout<<"Full";
      }
      else if (front==-1){
          front =rear = 0;
          arr[rear] = x;
      }
      else if (rear ==4 && front != 0) {
          rear = 0;
          arr[rear] = x;
      }
      else{
          rear++;
          arr[rear] = x;
      }
    }

    void dequeue(){
      if (front == -1) {
          cout<<"Empty";
      }
      arr[front] = -1;
      if (front == rear){
          front = -1;
          rear = -1;
      }
      else if (front == 4)
          front = 0;
      else
          front++;
    }

    void print(){
      if (rear >= front) {
          for (int i = front; i <= rear; i++)
              cout<<arr[i]<<" ";
      }
      else{
          for (int i = front; i < rear; i++)
              cout<<arr[i]<<" ";

          for (int i = 0; i <= rear; i++)
              cout<<arr[i]<<" ";
      }
      cout<<"\n";
    }

};

int main(){
  queue q;
  q.enqueue(1);
  q.print();
  q.enqueue(14);
  q.print();
  q.enqueue(15);
  q.print();
  q.enqueue(16);
  q.print();

  return 0;
}
