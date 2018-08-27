#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> be_with(100000, -1);
  vector<int> precent(100000, -1);
  for(int i=0; i<n;i++){
    int temp, with;
    cin>>temp>>with;
    be_with[temp] = with;
    be_with[with] = temp;
  }
  int m;
  cin>>m;
  vector<int> now(m);
  vector<int> output;
  for (int i = 0; i < m; ++i){
    cin>>now[i];
    precent[now[i]] = 1;
  }
  sort(now.begin(), now.end());
  for (int i = 0; i < m; ++i){
    if(be_with[now[i]] != -1){
      if(precent[be_with[now[i]]] != -1){
        continue;
      }
    }
    output.push_back(now[i]);
  }
  cout<<output.size()<<endl;
  for(int i = 0;i<output.size();i++){
    printf("%05d", output[i]);
    if(i != output.size() -1)
      cout<<" ";
    else
      cout<<endl;
  }

  return 0;
}