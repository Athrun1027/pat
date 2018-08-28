#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string line;
  cin>>line;
  int n1, n;
  int N = (int)line.size();
  for(int i = 3; i <= N; i++){
    int n2 = N + 2 - i;
    if(n2 % 2 == 0 && n2 / 2 <= i){
      n1 = n2 /2;
      n = i;
      break;
    }
  }
  for(int i = 0; i < n1 - 1; i++){
    printf("%c", line[i]);
    for(int j = 0; j < n - 2; j++){
      printf(" ");
    }
    printf("%c\n", line[line.size()-i-1]);
  }
  for(int i = 0; i < n; i++){
    printf("%c", line[n1-1+i]);
  }
  printf("\n");
  return 0;
}