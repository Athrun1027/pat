#include <stdio.h>
#include <string>
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
  for (int i = 0; i < 1001; ++i){
    if(hash[i] != 0) {
      count++;
    }
  }
  printf("%d", count);
  for (int i = 1000; i >= 0; --i){
    if(hash[i] != 0) {
      printf(" %d %.1f", i, hash[i]);
    }
  }
  printf("\n");
  return 0;
}