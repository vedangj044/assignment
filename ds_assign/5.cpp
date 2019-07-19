#include <iostream>
using namespace std;

class rational{
  public:
    int num;
    int dem;

    rational(int num1, int dem1){
      num = num1;
      dem = dem1;
    }

    void print(){
      cout<<num<<"/"<<dem<<"\n";
    }
};


void add(rational foo, rational bar){
  int num1 = foo.num*bar.dem + foo.dem*bar.num;
  int dem1 = foo.dem*bar.dem;
  rational r3(num1, dem1);
  r3.print();
}

void sub(rational foo, rational bar){
  int num1 = foo.num*bar.dem - foo.dem*bar.num;
  int dem1 = foo.dem*bar.dem;
  rational r3(num1, dem1);
  r3.print();
}

void multiply(rational foo, rational bar){
  rational r3(foo.num*bar.num, foo.dem*bar.dem);
  r3.print();
}

void divide(rational foo, rational bar){
  rational r3(foo.num*bar.dem, foo.dem*bar.num);
  r3.print();
}

int main(){
  rational r1(2, 3);
  rational r2(5, 6);
  add(r1, r2);
  sub(r1, r2);
  multiply(r1, r2);
  divide(r1, r2);
  return 0;
}
