#include <iostream>
using namespace std;

int main() {
  long long decimal, binary, remainder, product = 1;
  cin >> decimal;
  while(decimal!=0){
    remainder = decimal % 2;
    binary+=(product*remainder);
    decimal/=2;
    product*=10;
  }
  cout<<binary;
  return 0;
}
