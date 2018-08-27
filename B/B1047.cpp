#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <stack>

using namespace std;

int main(int argc, char** argv) {
  int n, hash[1001] = {0};
  scanf("%d", &n);
  for (int i = 0; i < n; ++i){
    int team, person, num;
    scanf("%d-%d %d", &team, &person, &num);
    hash[team] += num;
  }
  int max=0;
  for (int i = 0; i < 1000; ++i){
    if(hash[max] < hash[i]){
      max = i;
    }
  }
  printf("%d %d\n", max, hash[max]);
  return 0;
}