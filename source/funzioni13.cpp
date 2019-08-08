/*prodotto tra due numeri*/
#include <iostream>
using namespace std;

int moltiplica(int numero, int numero2){
  return numero*numero2;
}

int main(int argc, char const *argv[]) {
  int num1, num2;

  cin>>num1;
  cin>>num2;

  cout<<moltiplica(num1, num2);
  return 0;
}
