#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
  int name;
  int V, T;
};

bool cmp(node a, node b){
  if(a.T + a.V != b.T + b.V){
    return a.T + a.V > b.T + b.V;
  }else if(a.V != b.V){
    return a.V > b.V;
  }else{
    return a.name < b.name;
  }
}

int main(){
  int n, l, h, count=0;
  scanf("%d %d %d", &n, &l, &h);
  vector<node> sages;
  vector<node> nobelmen;
  vector<node> foolmen;
  vector<node> smallmen;
  for(int i = 0; i < n; i++){
    node temp;
    scanf("%d %d %d", &temp.name, &temp.V, &temp.T);
    if(temp.T >= l && temp.V >= l){
      if(temp.T >= h && temp.V >= h){
        sages.push_back(temp);
      }else if(temp.V >= h){
        nobelmen.push_back(temp);
      }else if(temp.V >= temp.T){
        foolmen.push_back(temp);
      }else{
        smallmen.push_back(temp);
      }
    }else{
      count++;
    }
  }
  sort(sages.begin(), sages.end(), cmp);
  sort(nobelmen.begin(), nobelmen.end(), cmp);
  sort(foolmen.begin(), foolmen.end(), cmp);
  sort(smallmen.begin(), smallmen.end(), cmp);
  cout<<(n-count)<<endl;
  for(int i = 0; i < sages.size(); i++){
    cout<<sages[i].name<<" "<<sages[i].V<<" "<<sages[i].T<<endl;
  }
  for(int i = 0; i < nobelmen.size(); i++){
    cout<<nobelmen[i].name<<" "<<nobelmen[i].V<<" "<<nobelmen[i].T<<endl;
  }
  for(int i = 0; i < foolmen.size(); i++){
    cout<<foolmen[i].name<<" "<<foolmen[i].V<<" "<<foolmen[i].T<<endl;
  }
  for(int i = 0; i < smallmen.size(); i++){
    cout<<smallmen[i].name<<" "<<smallmen[i].V<<" "<<smallmen[i].T<<endl;
  }
  return 0;
}