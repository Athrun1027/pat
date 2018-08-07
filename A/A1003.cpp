#include <bits/stdc++.h>
using namespace std;

typedef unsigned intu;

string do_item(string str);

int main(){
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  string str[10];
  for(int i=0; i<n; i++)
    cin>>str[i];
  for(int i=0; i<n; i++)
    cout<<do_item(str[i])<<endl;
  return 0;
}

string do_item(string str){
  if(str.size()<=2) return "NO";
  string buf[3]={"", "", ""};
  int index=0;
  for(intu i=0; i<str.size(); i++){
    if(str[i] == 'A') buf[index] += str[i];
    else if (str[i] == 'P' && index == 0) index++;
    else if (str[i] == 'T' && index == 1) index++;
    else return "NO";
  }
  if(buf[0].size()*buf[1].size() == buf[2].size()) return "YES";
  return "NO";
}