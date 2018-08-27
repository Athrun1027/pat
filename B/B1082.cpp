#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

struct node{
  int num;
  int d;
};

int main(){
  int n;
  cin>>n;
  vector<node> nodes;
  for (int i = 0; i < n; ++i){
    int x, y;
    node temp;
    cin>>temp.num>>x>>y;
    temp.d = x*x+y*y;
    nodes.push_back(temp);
  }
  sort(nodes.begin(), nodes.end(), [](node a, node b){
    return a.d < b.d;
  });
  printf("%04d %04d\n", nodes[0].num, nodes[n-1].num);
  return 0;
}