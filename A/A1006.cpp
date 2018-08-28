#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
  string name;
  int in, out;
};

int main(){
  int n;
  cin>>n;
  getchar();
  vector<node> nodes(n);
  for(int i = 0; i < n; i++){
    string line;
    getline(cin, line);
    string name="";
    int find = 1, in = 0, out = 0;
    for(int j = 0; j < line.size(); j++){
      if(find == 1){
        name += line[j];
        if(line[j+1] == ' '){
          find = 2;
        }
      }else if(find == 2 && line[j] == ' '){
        in += ((line[j+1]-'0')*10 + (line[j+2]-'0'))*60*60;
        in += ((line[j+4]-'0')*10 + (line[j+5]-'0'))*60;
        in += (line[j+7]-'0')*10 + (line[j+8]-'0');
        j += 8;
        find = 3;
      }else if(find == 3 && line[j] == ' '){
        out += ((line[j+1]-'0')*10 + (line[j+2]-'0'))*60*60;
        out += ((line[j+4]-'0')*10 + (line[j+5]-'0'))*60;
        out += (line[j+7]-'0')*10 + (line[j+8]-'0');
        j += 8;
      }
    }
    nodes[i] = node{name, in, out};
  }
  int max=0, min=1e9;
  string lock="", unlock="";
  for(int i = 0; i < n; i++){
    if(nodes[i].in < min){
      min = nodes[i].in;
      unlock = nodes[i].name;
    }
    if(nodes[i].out > max){
      max = nodes[i].out;
      lock = nodes[i].name;
    }
  }
  cout<<unlock<<" "<<lock<<endl;
  return 0;
}