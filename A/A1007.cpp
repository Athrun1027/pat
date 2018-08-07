#include <bits/stdc++.h>
using namespace std;

typedef unsigned intu;

bool is_prime(int num){
    if (num == 2 || num == 3){
       return true;
    }
    if(num%6!=1 && num%6!=5)
       return false;
    for(int i=5;i<=int(sqrt(num));i+=6)
       if(num%i==0||num%(i+2)==0)
           return false;
    return true;
}

int main(){
  ios::sync_with_stdio(false);
  int N;
  cin>>N;
  vector<int> v;
  for(int i=1; i<=N; i++){
    if(is_prime(i)) v.push_back(i);
  }
  int count=0;
  for (intu i = 1; i < v.size(); ++i){
      if(v[i] - v[i-1] == 2) count++;
  }
  cout<<count<<endl;
  return 0;
}