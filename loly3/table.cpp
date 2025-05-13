// buat perkalian 10


#include <iostream>
using namespace std;

void printtable(int n){
    for(int i=1; i<=10; i++)
    cout << n << "*" << i << "=" << n*i << endl;
}
int main(){
    int n=5;
    printtable(n);
    return 0;
}
