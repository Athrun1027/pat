#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;


int main(){
  string line;
  int n;
  cin>>line>>n;
  for (int cnt = 1; cnt < n; cnt++) {
    string t;
    int j;
    for (int i = 0; i < line.length(); i = j) {
      j = i;
      while(j < line.length() && line[j] == line[i]){
        j++;
      }
      t += line[i];
      t += '0'+ j - i;
    }
    line = t;
  }
  cout<<line<<endl;
  return 0;
}