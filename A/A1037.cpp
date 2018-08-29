#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, m;
  cin>>n;
  vector<int> v1(n);
  for(int i = 0; i < n; i++){
    cin>>v1[i];
  }
  cin>>m;
  vector<int> v2(m);
  for(int i = 0; i < m; i++){
    cin>>v2[i];
  }
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());
  int p=0, q=0, sum=0;
  while(v1[p] < 0 && v2[q] < 0 && p < n && q < m){
    sum += v1[p] * v2[q];
    p++;q++;
  }
  p = n - 1;
  q = m - 1;
  while(v1[p] > 0 && v2[q] > 0 && p >=0 && q >= 0){
    sum += v1[p] * v2[q];
    p--;q--;
  }
  printf("%d\n", sum);
  return 0;
}