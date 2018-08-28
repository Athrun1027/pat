#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main(int argc, char** argv) {
  int a, b;
  a = 2899, b = 4444;
  int sum = 1;
  while(b != 0){
    if(b & 1){
      sum *= a;
    }
    a *= a;
    b >>= 1;
  }
  printf("%d\n", sum);
  return 0;
}
