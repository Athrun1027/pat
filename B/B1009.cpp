#include <bits/stdc++.h>
using namespace std;

typedef unsigned intu;

int main(){
  ios::sync_with_stdio(false);
  string str, temp="";
  getline(cin, str);
  vector<string > v;
  for (intu i = 0; i < str.size(); i++){
    if(str[i] == ' ') {
      v.push_back(temp);
      temp = "";
    }else{
      temp += str[i];
    }
    if(i == str.size()-1) v.push_back(temp);
  }
  for (intu i = v.size(); i > 0; i--){
    cout<<v[i-1];
    if(i-1 == 0) cout<<endl;
    else cout<<" ";
  }
  return 0;
}