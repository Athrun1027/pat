#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string lines[4];
  string days[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
  for(int i = 0; i < 4; i++){
    cin>>lines[i];
  }
  int minl = min(lines[0].size(), lines[1].size());
  int find = 1, day, hour, second;
  for(int i = 0; i < minl; i++){
    if(lines[0][i] == lines[1][i]){
      if(find == 1 && lines[0][i] >= 'A' && lines[0][i] <= 'G'){
        day = lines[0][i] - 'A';
        find = 2;
      }else if(find == 2){
        if(lines[0][i] >= 'A' && lines[0][i] <= 'N'){
          hour = lines[0][i] - 'A' + 10;
          break;
        }else if(lines[0][i] >= '0' && lines[0][i] <= '9'){
          hour = lines[0][i] - '0';
          break;
        }
      }
    }
  }
  minl = min(lines[2].size(), lines[3].size());
  for(int i = 0; i < minl; i++){
    if(lines[2][i] == lines[3][i] && isalpha(lines[2][i])){
      second = i;
    }
  }
  cout<<days[day]<<" ";
  printf("%02d:%02d\n", hour, second);
  return 0;
}