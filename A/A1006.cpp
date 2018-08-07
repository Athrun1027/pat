#include <bits/stdc++.h>
using namespace std;

typedef unsigned intu;

int main(){
  ios::sync_with_stdio(false);
  int num;
  cin>>num;
  int B = num / 100;
  num %= 100;
  int S = num / 10;
  num %= 10;
  for(int i=0; i<B; i++) cout<<"B";
  for(int i=0; i<S; i++) cout<<"S";
  for(int i=0; i<num; i++) cout<<i+1;
  cout<<endl;
  return 0;
}