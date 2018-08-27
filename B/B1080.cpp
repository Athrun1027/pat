#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

struct node{
  string number;
  int Gp=-1;
  int Gm=-1;
  int Gf=-1;
  int G=-1;
};

bool cmp(node a, node b){
  if (a.G != b.G){
    return a.G > b.G;
  }else{
    return a.number < b.number;
  }
}

int main(){
  int p, m, n;
  map<string, int> hash;
  cin>>p>>m>>n;
  vector<node> nodes;
  for (int i = 0; i < p; ++i){
    node temp;
    cin>>temp.number>>temp.Gp;
    hash[temp.number] = i+1;
    nodes.push_back(temp);
  }
  for (int i = 0; i < m; ++i){
    string number;
    int Gm;
    cin>>number>>Gm;
    if (hash[number] > 0){
      nodes[hash[number]-1].Gm = Gm;
    }
  }
  for (int i = 0; i < n; ++i){
    string number;
    int Gf;
    cin>>number>>Gf;
    if (hash[number] > 0){
      nodes[hash[number]-1].Gf = Gf;
    }
  }
  for (int i = 0; i < nodes.size(); ++i){
    if (nodes[i].Gm > nodes[i].Gf){
      double G;
      G = (nodes[i].Gm*0.4 + nodes[i].Gf*0.6)+0.5;
      nodes[i].G = (int)G;
    }else{
      nodes[i].G =nodes[i].Gf;
    }
  }
  sort(nodes.begin(), nodes.end(), cmp);
  for (int i = 0; i < nodes.size(); ++i){
    if (nodes[i].Gp < 200 || nodes[i].G < 60){
      continue;
    }
    cout<<nodes[i].number<<" "<<nodes[i].Gp<<" "<<nodes[i].Gm<<" "<<nodes[i].Gf<<" "<<nodes[i].G<<endl;
  }
  return 0;
}