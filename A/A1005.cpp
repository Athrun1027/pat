#include <bits/stdc++.h>
using namespace std;

typedef unsigned intu;

int main(){
  ios::sync_with_stdio(false);
  int n, list[100000]={0};
  vector<int> input;
  vector<int> output;
  cin>>n;
  for(int i = 1; i <= n; i++){
    int item;
    cin>>item;
    input.push_back(item);
  }
  for(intu i = 0; i < input.size(); i++){
    int num = input[i];
    while(num != 1){
      if(num & 1) num = (3*num+1) / 2;
      else num /= 2;
      list[num] = 1;
    }
  }
  for(intu i = 0; i < input.size(); i++)
    if(list[input[i]] == 0)
      output.push_back(input[i]);
  sort(output.begin(), output.end());
  cout<<output[output.size()-1];
  for(intu i=output.size()-1; i > 0; i--)
    cout<<" "<<output[i-1];
  cout << endl;
  return 0;
}