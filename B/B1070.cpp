#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
  int N;
  cin>>N;
  vector<int> lens(N);
  for (int i = 0; i < N; ++i){
    cin>>lens[i];
  }
  sort(lens.begin(), lens.end());
  int origin = lens[0];
  for (int i = 1; i < N; ++i){
    origin = (origin + lens[i])/2;
  }
  cout<<origin<<endl;
  return 0;
}