#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
  int data;
  int next;
};

int main(){
  node nodes[100000];
  int start, n, k;
  vector<int> a[3];
  scanf("%d %d %d", &start, &n, &k);
  for (int i = 0; i < n; ++i){
    node temp;
    int addr;
    scanf("%d %d %d", &addr, &temp.data, &temp.next);
    nodes[addr] = temp;
  }
  for(int i=start; i!=-1;){
    node temp=nodes[i];
    if (temp.data < 0){
      a[0].push_back(i);
    }else if (temp.data >= 0 && temp.data <= k){
      a[1].push_back(i);
    }else if (temp.data > k){
      a[2].push_back(i);
    }
    i = temp.next;
  }
  int first=1;
  for (int i = 0; i < 3; ++i){
    for (int j = 0; j < a[i].size(); ++j){
      if (first == 1){
        printf("%05d %d", a[i][j], nodes[a[i][j]].data);
        first = 0;
      }else{
        printf(" %05d\n%05d %d", a[i][j], a[i][j], nodes[a[i][j]].data);
      }
    }
  }
  printf(" -1\n");
  return 0;
}