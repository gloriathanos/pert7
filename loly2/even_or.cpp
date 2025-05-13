// menentukan ganjil genap

#include <iostream>
using namespace std;

bool iseven( int(n)){
    return ( n - 2 ==0) ;
}
  int main(){
    int n= 10;
    if (iseven(n)){
        cout << true << endl;
    }else{
        cout << false << endl;
    }
    return 0;
  }