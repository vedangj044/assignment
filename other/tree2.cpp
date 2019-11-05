#include <iostream>
#include <math.h>
using namespace std;

int parent(int arr[], int total, int x){
  int i;
  for(i=0; i<total; i++){
    if(arr[i] == x){
      break;
    }
  }

  if(i%2==0){
    int j = i/2 - 1;
    return arr[j];
  }
  else{
    int j = i/2;
    return arr[j];
  }
}

void ancestor(int arr[], int total, int x){
  while(parent(arr, total, x) != arr[0]){
    int j = parent(arr, total, x);
    cout<<j<<"\n";
    x=j;
  }
  cout<<arr[0]<<"\n";
}

void child(int arr[], int total, int x){
  int i;
  for(i=0; i<total; i++){
    if(arr[i] == x){
      break;
    }
  }

  cout<<"child  "<<arr[2*i+1]<<" "<<arr[2*(i+1)]<<"\n";
}

void height(int arr[], int total){
  int h = log2(total+1);
  cout<<"height "<<h<<"\n";
}

void siblings(int arr[], int total, int x){
  int p = parent(arr, total, x);
  child(arr, total, p);
}

int main(){
  int arr[] = {1, 2, 3, 4, 5, 6};
  ancestor(arr, 6, 5);
  child(arr, 6, 1);
  height(arr, 4);
  siblings(arr, 6, 2);
}
