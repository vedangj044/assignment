#include <iostream>
using namespace std;

int Binary(int arr[], int l, int r, int x){
  if(r>=l){
    int mid=l+(r-l)/2;
    if(arr[mid]==x){
      return mid;
    }
    else if(arr[mid]>x){
      return Binary(arr, l, mid-1, x);
    }
    else{
      return Binary(arr, mid+1, r, x);
    }
  }
  return -1;
}

int main(){
  int arr[6] = {1, 2, 4, 7, 8, 9};
  int x;
  cin>>x;
  int f = Binary(arr, 0, 5, x);
  cout<<f<<"\n";
  return 0;
}
