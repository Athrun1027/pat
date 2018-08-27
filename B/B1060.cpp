#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> at(n+1);
  for(int i=1; i<n+1;i++){
    int temp;
    cin>>temp;
    at[i] = temp;
  }

  sort(at.begin()+1, at.end(), [](int a, int b){return a>b;});
  int E=0;
  for (int i = 1; i < n+1; ++i){
    if(at[i]>i)
      E++;
  }
  cout<<E<<endl;

  return 0;
}