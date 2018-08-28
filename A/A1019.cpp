#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  long long num, b;
  cin>>num>>b;
  vector<string> ans;
  while(num != 0){
    long long dash = num % b;
    num /= b;
    ans.push_back(to_string(dash));
  }
  reverse(ans.begin(), ans.end());
  if(ans.size() == 1){
    printf("Yes\n");
  }else if(ans.size() == 0){
    printf("Yes\n0\n");
  }else{
    int success=1;
    for(int i = 0; i < ans.size()/2; i++){
      if(ans[i] != ans[ans.size()-i-1]){
        success = 0;
        printf("No\n");
        break;
      }
    }
    if(success == 1){
      printf("Yes\n");
    }
  }
  for(int i = 0; i < ans.size(); i++){
    cout<<ans[i];
    if(i == ans.size() - 1){
      printf("\n");
    }else{
      printf(" ");
    }
  }
  return 0;
}