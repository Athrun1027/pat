#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  int n;
  cin>>n;
  for(int i = 0; i < n; i++){
    long long a, b, c, sum;
    cin>>a>>b>>c;
    sum = a + b;
    if(a < 0 && b < 0 && sum >=0){
      printf("Case #%d: false\n", i+1);
    }else if(a > 0 && b > 0 && sum <= 0){
      printf("Case #%d: true\n", i+1);
    }else if( sum > c){
      printf("Case #%d: true\n", i+1);
    }else {
      printf("Case #%d: false\n", i+1);
    }
  }
  return 0;
}