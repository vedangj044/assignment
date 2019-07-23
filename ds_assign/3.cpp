#include <iostream>
using namespace std;

void padd(int arr[], int arr1[]){
  int i = 1;
  int j = 1;
  int lead = 1;
  int m = arr[0];
  int n = arr1[0];
  int c[(m+n)*2+1];
  c[0] = m+n;

  while(i<2*m && j<2*n){
    if(arr[i]==arr1[j]){
      c[lead+1]=arr[i+1]+arr1[j+1];
      c[lead]=arr[i];
      lead+=2;
      i+=2;
      j+=2;
    }
    else if(arr[i]<arr1[j]){
      c[lead]=arr[i];
      c[lead+1]=arr[i+1];
      lead+=2;
      i+=2;
    }
    else{
      c[lead]=arr1[j];
      c[lead+1]=arr1[j+1];
      lead+=2;
      j+=2;
    }
  }

  while(i<=2*m){
    c[lead]=arr[i];
    c[lead+1]=arr[i+1];
    lead+=2;
    i+=2;
  }

  while(j<=2*n){
    c[lead]=arr1[j];
    c[lead+1]=arr1[j+1];
    lead+=2;
    j+=2;
  }

  for(int i = 0; i < lead; i++){
    cout<<c[i]<<" ";
  }
}

int main(){
  int arr[] = {3, 0, 2, 1, 10, 100, 100};
  int arr1[] = {1, 0, 10};
  padd(arr, arr1);
  return 0;
}
