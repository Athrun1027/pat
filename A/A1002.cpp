#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
  int n;
  double hash[1001] = {0.0};
  scanf("%d", &n);
  int max=0, count=0;
  for(int i = 0; i<n; i++){
    int co;
    double ex;
    scanf("%d %lf", &co, &ex);
    hash[co] += ex;
  }
  int m;
  scanf("%d", &m);
  for(int i = 0; i<m; i++){
    int co;
    double ex;
    scanf("%d %lf", &co, &ex);
    hash[co] += ex;
  }
  vector<int> cos;
  for (int i = 1000; i >= 0; --i){
    if(hash[i] != 0) {
      cos.push_back(i);
    }
  }
  printf("%d", (int)cos.size());
  for (int i = 0; i < cos.size(); ++i){
    printf(" %d %.1f", cos[i], hash[cos[i]]);
  }
  printf("\n");
  return 0;
}