#include <iostream>
#include "stack2.cpp"
using namespace std;

int a[4][4] = {{0, 0, 1, 1},
               {1, 1, 1, 1},
               {1, 1, 1, 0},
               {1, 1, 1, 1}};

int l[8][2];
int last = 0;
stack moves;

void ava(int position[]){
  last=0;
  int m[8][2] = {{-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}};

  for(int i=0; i<8; i++){
    int b[2] = {position[0]+m[i][0], position[1]+m[i][1]};
    if(3 >= b[0] && 3>=b[1] && 0<=b[0] && 0<=b[1] ){
      if(a[b[0]][b[1]]==1){
        l[last][0] = b[0];
        l[last][1] = b[1];
        last+=1;
      }
    }
  }
}

int solver(int x, int y){
  if(x==3 && y==3){
    return 1;
  }

  if(last>0){
    for(int i=0; i<last; i++){
      if(moves.find(l[i][0], l[i][1])==false){
        moves.push(l[i][0], l[i][1]);
        int m = l[i][0];
        int n = l[i][1];
        int position[2] = {m, n};
        ava(position);
        return solver(m, n);
      }
    }
  }

  moves.pop();
  if(moves.isEmpty()==false){
    int pos[2] = {moves.topelX(), moves.topelY()};
    ava(pos);
    for(int j=0; j<last-1; j++){
      l[j][0]=l[j+1][0];
      l[j][1]=l[j+1][1];
    }
    return solver(pos[0], pos[1]);
  }

  return 0;
}

int main(){
  int s[2] = {0, 0};
  ava(s);
  solver(0, 0);
  moves.print();
  return 0;
}
