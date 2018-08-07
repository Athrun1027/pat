#include <bits/stdc++.h>
using namespace std;

typedef unsigned intu;

int main(){
  ios::sync_with_stdio(false);
  int N, step;
  cin>>N>>step;
  while(step >= N) step -= N;
  vector<int> v;
  for(int i=1; i<=N; i++){
    int item;
    cin>>item;
    v.push_back(item);
  }
  vector<int> v2;
  for (int i = N-step; i < N; ++i){
    v2.push_back(v[i]);
  }
  for (int i = 0; i < (N-step); ++i){
    v2.push_back(v[i]);
  }
  for (intu i = 0; i < v2.size(); ++i){
    cout<<v2[i];
    if(i == v2.size()-1) cout<<endl;
    else cout<<" ";
  }
  return 0;
}