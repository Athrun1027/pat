#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

struct node{
  int num;
  int d;
};

int main(){
  int n, hash[20000]={0};
  cin>>n;
  vector<int> nums;
  for (int i = 0; i < n; ++i){
    int temp;
    cin>>temp;
    int d = max(temp, i+1) - min(temp, i+1);
    if (hash[d]++ == 1){
      nums.push_back(d);
    }
  }
  sort(nums.begin(), nums.end(), [](int a, int b){
    return a > b;
  });
  for (int i = 0; i < nums.size(); ++i){
    printf("%d %d\n", nums[i], hash[nums[i]]);
  }
  return 0;
}