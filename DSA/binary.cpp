#include <iostream>
using namespace std;
int btd(int binary_num){
  int num=0,rem,pow=1;
    while(binary_num>0){
      rem=binary_num%10;
      binary_num/=10;
      num+=rem*pow;
      pow*=2;
  }
  return num;
}
int main() {
    cout<<btd(1010);
    return 0;
}
