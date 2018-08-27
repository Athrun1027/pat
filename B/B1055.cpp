#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
  string name;
  int high;
};

bool cmp(node a, node b){
  if(a.high != b.high){
    return a.high < b.high;
  }else {
    return a.name > b.name;
  }
}
bool cmp2(node a, node b){
  if(a.high != b.high){
    return a.high > b.high;
  }else {
    return a.name < b.name;
  }
}

int main(){
  int N, M;
  cin>>N>>M;
  vector<node> input(N);
  for (int i = 0; i < N; ++i){
    string name;
    int high;
    cin>>name>>high;
    input[i] = node{name, high};
  }
  sort(input.begin(), input.end(), cmp);
  int ones = N/M;
  vector<string> ans;
  for (int i = 0; i < M; ++i){
    vector<node> temp;
    if (i == M -1){
      temp.assign(input.begin()+i*ones, input.end());
    }else{
      temp.assign(input.begin()+i*ones, input.begin()+(i+1)*ones);
    }
    sort(temp.begin(), temp.end(), cmp2);
    vector<node> output((int)temp.size());
    int half = temp.size()/2;
    int dash = 1, step=0;
    for (int i = 0; i < temp.size(); ++i){
      output[half+step*dash] = temp[i];
      if(dash == 1){
        step++;
      }
      dash *= -1;
    }
    string str="";
    for (int i = 0; i < output.size(); ++i){
      str += output[i].name;
      if(i != output.size() -1){
        str += " ";
      }
    }
    ans.push_back(str);
  }
  for (int i = 0; i < ans.size(); ++i){
    cout<<ans[ans.size()-i-1]<<endl;
  }
  return 0;
}