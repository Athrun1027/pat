#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
  double a[3]={0};
  for(int i = 0; i < 3; i++){
    double W, T, L;
    cin>>W>>T>>L;
    a[i] = max(W, T);
    a[i] = max(a[i], L);
    if(a[i] == W){
      printf("W ");
    }else if(a[i] == T){
      printf("T ");
    }else if(a[i] == L){
      printf("L ");
    }
  }
  printf("%.2f\n", (a[0]*a[1]*a[2]*0.65-1)*2);
  return 0;
}