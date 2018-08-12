#include <bits/stdc++.h>
using namespace std;

typedef unsigned intu;

int main(){
  // ios::sync_with_stdio(false);
  int a, b, count=0;
  cin>>a>>b;
  do{
    if(b>0){
      if(count==0){
        cout<<a*b<<" "<<b-1;
        count++;
      }else{
        cout<<" "<<a*b<<" "<<b-1;
        count++;
      }
    }
  }while(cin>>a>>b);
  if(!count) cout<<"0 0";
  return 0;
}