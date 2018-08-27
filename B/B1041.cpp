#include <bits/stdc++.h>
using namespace std;

struct node{
  string num;
  int sit;
};

int main(){
  int n;
  cin>>n;
  map<int, node> mp;
  for(int i=0; i<n;i++){
    node temp;
    int key;
    cin>>temp.num>>key>>temp.sit;
    mp[key] = temp;
  }
  int m;
  cin>>m;
  for (int i = 0; i < m; ++i){
    int who;
    cin>>who;
    cout<<mp[who].num<<" "<<mp[who].sit<<endl;
  }
  return 0;
}