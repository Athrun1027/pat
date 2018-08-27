#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int func(int N){
  int n = sqrt(N);
  while(N % n != 0){
    n--;
  }
  return n;
}

int main(){
  int N;
  cin>>N;
  int n = func(N);
  int m = N/n;
  vector<int> input(N);
  for (int i = 0; i < N; ++i){
    cin>>input[i];
  }
  sort(input.begin(), input.end(), [](int a, int b){return a>b;});
  vector<vector<int> > output(m, vector<int>(n, -1));
  int forward = 1, k=0, j=0;
  for (int i = 0; i < N; ++i){
    output[k][j] = input[i];
    if (forward == 1){
      j++;
      if(j == n || output[k][j] != -1){
        forward = 2;
        j--;
        k++;
      }
    }else if(forward == 2){
      k++;
      if(k == m || output[k][j] != -1){
        forward = 3;
        k--;
        j--;
      }
    }else if(forward == 3){
      j--;
      if(j == -1 || output[k][j] != -1){
        forward = 4;
        j++;
        k--;
      }
    }else if(forward == 4){
      k--;
      if(k == -1 || output[k][j] != -1){
        forward = 1;
        k++;
        j++;
      }
    }
  }
  for (int i = 0; i < m; ++i){
    for (int j = 0; j < n; ++j){
      printf("%d", output[i][j]);
      if (j == n -1){
        printf("\n");
      }else {
        printf(" ");
      }
    }
  }
  return 0;
}