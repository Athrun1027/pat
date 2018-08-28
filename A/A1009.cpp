#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;


int main(){
  int n;
  double hash_a[1001] = {0.0};
  double hash_b[1001] = {0.0};
  double hash_c[2002] = {0.0};
  vector<int> a_in;
  vector<int> b_in;
  vector<int> c_in;
  scanf("%d", &n);
  for(int i = 0; i<n; i++){
    int co;
    double ex;
    scanf("%d %lf", &co, &ex);
    hash_a[co] += ex;
    a_in.push_back(co);
  }
  int m;
  scanf("%d", &m);
  for(int i = 0; i<m; i++){
    int co;
    double ex;
    scanf("%d %lf", &co, &ex);
    hash_b[co] += ex;
    b_in.push_back(co);
  }
  for(int i = 0; i < a_in.size(); i++){
    for(int j = 0; j < b_in.size(); j++){
      int co;
      double ex;
      co = a_in[i] + b_in[j];
      ex = hash_a[a_in[i]] * hash_b[b_in[j]];
      hash_c[co] += ex;
    }
  }
  int count=0;
  for (int i = 2000; i >= 0; --i){
    if(hash_c[i] != 0.0){
      count++;
    }
  }
  printf("%d", count);
  for (int i = 2000; i >= 0; --i){
    if(hash_c[i] != 0.0){
      printf(" %d %.1f", i, hash_c[i]);
    }
  }
  printf("\n");
  return 0;
}