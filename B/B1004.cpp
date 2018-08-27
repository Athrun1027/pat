#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  string name[999], major[999];
  int coure[999], n, min=0, max=0;
  cin>>n;
  for (int i=0;i<n;i++) cin>>name[i]>>major[i]>>coure[i];
  for (int i=0;i<n;i++) {
    if(coure[i] < coure[min]) min = i;
    if(coure[i] > coure[max]) max = i;
  }
  cout<<name[max]<<" "<<major[max]<<endl;
  cout<<name[min]<<" "<<major[min]<<endl;
  return 0;
}