#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int a[3];
  cin>>a[0]>>a[1]>>a[2];
  cout<<"#";
  for(int i = 0; i < 3; i++){
    vector<int> temp;
    while(a[i] != 0){
      int dash = a[i] % 13;
      a[i] /= 13;
      temp.push_back(dash);
    }
    if(temp.size() == 0){
      printf("00");
    }else if(temp.size() == 1){
      printf("0");
      if(temp[0] > 9){
        printf("%c", 'A'+temp[0]-10);
      }else{
        printf("%d", temp[0]);
      }
    }else{
      for(int j = 1; j >= 0; j--){
        if(temp[j] > 9){
          printf("%c", 'A'+temp[j]-10);
        }else{
          printf("%d", temp[j]);
        }
      }
    }
  }
  printf("\n");
  return 0;
}