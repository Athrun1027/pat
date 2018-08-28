#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> cards(55, 0);

int main(int argc, char** argv) {
  int n;
  scanf("%d", &n);
  vector<int> distence(n+1, 0);
  vector<int> one2any(n+1, 0);
  int sum=0;
  for(int i = 1; i < n+1; i++){
    int temp;
    scanf("%d", &temp);
    distence[i] = temp;
    one2any[i] = sum;
    sum += temp;
  }
  int m;
  scanf("%d", &m);
  for(int i = 0; i < m; i++){
    int s, t;
    scanf("%d %d", &s, &t);
    if(s > t){
      swap(s, t);
    }
    int s2t = one2any[t] - one2any[s];

    printf("%d\n", min(s2t, sum - s2t));
  }
  return 0;
}
