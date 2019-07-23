#include <iostream>
using namespace std;

void transpose(int arr[][3]){
    int non = arr[0][2];
    int arr1[non][3];

    for(int i=0; i<=non; i++){
      if(arr[i][0]!=arr[i][1]){
        arr1[i][0]=arr[i][1];
        arr1[i][1]=arr[i][0];
        arr1[i][2]=arr[i][2];
      }
      else{
        arr1[i][0]=arr[i][0];
        arr1[i][1]=arr[i][1];
        arr1[i][2]=arr[i][2];
      }
    }

    for(int i = 0; i <= non; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cout<< arr1[i][j]<<" ";
        }
        cout<<"\n"; //new line at each row
    }
}

int main(){
  int arr[9][3]={
    {5, 5, 8},
    {0, 0, -1},
    {0, 2, 3},
    {0, 4, 1},
    {1, 1, -2},
    {2, 4, 1},
    {3, 0, 1},
    {3, 2, -4},
    {4, 3, 1},
  };
  transpose(arr);
  return 0;
}
